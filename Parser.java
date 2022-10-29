import java.util.ArrayList;

public class Parser{
  private ArrayList<SyntaxToken> _tokens;
  private int _position;
  private ArrayList<String> _diagnostics = new ArrayList<>();

  public ArrayList<String> getDiagnostics(){
    return _diagnostics;
  }

  public Parser(String text){
    ArrayList<SyntaxToken> tokens = new ArrayList<SyntaxToken>();
    
    Lexer lexer = new Lexer(text);
    SyntaxToken token;
    do{
      token = lexer.NextToken();

      if(token.getKind() != SyntaxKind.WhitespaceToken &&
         token.getKind() != SyntaxKind.BadToken){
        tokens.add(token);
         }
    } while(token.getKind() != SyntaxKind.EndOfFileToken);

    _tokens = tokens;
    _diagnostics.addAll(lexer.getDiagnostics());
  }

  private SyntaxToken peek(int offset){
    int index = _position + offset;
    if(index >= _tokens.size()) return _tokens.get(_tokens.size() - 1);
    else return _tokens.get(index);
  }

  private SyntaxToken current(){
    return peek(0);
  }

  private SyntaxToken nextToken(){
    SyntaxToken current = current();
    _position++;
    return current;
  }

  private SyntaxToken match(SyntaxKind kind){
    if(current().getKind() == kind) return nextToken();
    _diagnostics.add(String.format("ERROR: Unexpected token <%s>, expected <%s>", current().getKind(), kind));
    return new SyntaxToken(kind, current().getPosition(), null, null);
  }

  private ExpressionSyntax ParseExpression(){
    return ParseTerm();
  }

  public SyntaxTree Parse(){
    ExpressionSyntax expression = ParseExpression();
    SyntaxToken endOfFileToken = match(SyntaxKind.EndOfFileToken);
    return new SyntaxTree(_diagnostics, expression, endOfFileToken);
  }

  private ExpressionSyntax ParseTerm(){
    ExpressionSyntax left = ParseFactor();

    while(current().getKind() == SyntaxKind.PlusToken || current().getKind() == SyntaxKind.MinusToken){
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax right = ParseFactor();
      left = new BinaryExpressionSyntax(left, operatorToken, right);
    }

    return left;
  }

  private ExpressionSyntax ParseFactor(){
    ExpressionSyntax left = parsePrimaryExpression();

    while(current().getKind() == SyntaxKind.SlashToken || current().getKind() == SyntaxKind.StarToken){
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax right = parsePrimaryExpression();
      left = new BinaryExpressionSyntax(left, operatorToken, right);
    }

    return left;
  }

  private ExpressionSyntax parsePrimaryExpression(){
    if(current().getKind() == SyntaxKind.OpenParenthesisToken){
      SyntaxToken left = nextToken();
      ExpressionSyntax expression = ParseExpression();
      SyntaxToken right = match(SyntaxKind.CloseParenthesisToken);
      return new ParenthesisExpressionSyntax(left, expression, right);
    }

    SyntaxToken numberToken = match(SyntaxKind.NumberToken);
    return new LiteralExpressionSyntax(numberToken);
  }
}