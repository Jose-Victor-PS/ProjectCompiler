package CompilerComponents;

import Syntax.*;

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
      token = lexer.Lex();

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
      return ParseAssignmentExpression();
    }

  private ExpressionSyntax ParseBinaryExpression(int parentPrecedence){
    ExpressionSyntax left;
    int unaryPrecedence = SyntaxFacts.getUnaryOperatorPrecedence(current().getKind());
    if (unaryPrecedence != 0 && unaryPrecedence > parentPrecedence){
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax operand = parsePrimaryExpression();
      left = new UnaryExpressionSyntax(operatorToken, operand);
    }
    else{
      left = parsePrimaryExpression();
    }

    while (true){
      int precedence = SyntaxFacts.getBinaryOperatorPrecedence(current().getKind());
      if(precedence == 0 || precedence <= parentPrecedence){
        break;
      }
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax right = ParseBinaryExpression(precedence);
      left = new BinaryExpressionSyntax(left, operatorToken, right);
    }

    return left;
  }

  private ExpressionSyntax ParseAssignmentExpression(){
    if(peek(0).getKind() == SyntaxKind.IdentifierKeyword && peek(1).getKind() == SyntaxKind.EqualsToken){
      SyntaxToken identifierToken = nextToken();
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax right = ParseAssignmentExpression();
      return new AssignmentExpressionSyntax(identifierToken, operatorToken, right);
    }

    return ParseBinaryExpression(0);
  }

  public SyntaxTree Parse(){
    ExpressionSyntax expression = ParseExpression();
    SyntaxToken endOfFileToken = match(SyntaxKind.EndOfFileToken);
    return new SyntaxTree(_diagnostics, expression, endOfFileToken);
  }

  private ExpressionSyntax parsePrimaryExpression(){
    if(current().getKind() == SyntaxKind.OpenParenthesisToken){
      SyntaxToken left = nextToken();
      ExpressionSyntax expression = ParseExpression();
      SyntaxToken right = match(SyntaxKind.CloseParenthesisToken);
      return new ParenthesisExpressionSyntax(left, expression, right);
    }
    else if(current().getKind() == SyntaxKind.FalseKeyword || current().getKind() == SyntaxKind.TrueKeyword){
      SyntaxToken keyword = nextToken();
      boolean value = current().getKind() == SyntaxKind.TrueKeyword;
      return new LiteralExpressionSyntax(keyword, value);
    }
    else if(current().getKind() == SyntaxKind.IdentifierKeyword){
      SyntaxToken identifierToken = nextToken();
      return new NameExpressionSyntax(identifierToken);
    }

    SyntaxToken numberToken = match(SyntaxKind.NumberToken);
    return new LiteralExpressionSyntax(numberToken);
  }
}