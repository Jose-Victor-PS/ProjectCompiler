import java.util.ArrayList;

public class Parser{
  private SyntaxToken[] _tokens;
  private int _position;
  
  public Parser(String text){
    ArrayList<SyntaxToken> tokens = new ArrayList<SyntaxToken>();
    
    Lexer lexer = new Lexer(text);
    SyntaxToken token = new SyntaxToken();
    do{
      token = lexer.NextToken();

      if(token.getKind() != SyntaxKind.WhitespaceToken &&
         token.getKind() != SyntaxKind.BadToken){
        tokens.add(token);
         }
    } while(token.getKind() != SyntaxKind.EndOfFileToken)

    _tokens = tokens.toArray();
  }

  private SyntaxToken peek(int offset){
    int index = _position + offset;
    if(index >= _tokens.length()) return _tokens[_tokens.length() - 1];
    else return _tokens[index];
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
    return new SyntaxToken(kind, current().getPosition(), null, null);
  }
  
  public ExpressionSyntax Parse(){
    ExpressionSyntax left = parsePrimaryExpression();

    while(current().getKind() == SyntaxKind.PlusToken || current().getKind() == SyntaxKind.MinusToken){
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax right = parsePrimaryExpression();
      left = new BinaryExpressionSyntax(left, operatorToken, right);
    }

    return left;
  }

  private ExpressionSyntax parsePrimaryExpression(){
    SyntaxToken numberToken = match(SyntaxKind.NumberToken);
    return new NumberExpressionSyntax(numberToken);
  }
}