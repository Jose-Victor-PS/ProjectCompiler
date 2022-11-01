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

      if(token.getKind() != SyntaxKind.WhitespaceToken){
        tokens.add(token);
      }
    } while(token.getKind() != SyntaxKind.EndOfFileToken);

    _tokens = tokens;
    _diagnostics.addAll(lexer.getDiagnostics());
  }

  public SyntaxTree Parse(){
    SyntaxToken lastToken;
    ExpressionSyntax expression = ParseExpression();
    if(_diagnostics.size() < 1)
      lastToken = match(SyntaxKind.EndOfFileToken);
    else
      lastToken = match(SyntaxKind.BadToken);
    return new SyntaxTree(_diagnostics, expression, lastToken);
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
      return ParseAssignmentOrDeclarationExpression();
    }

  private ExpressionSyntax ParseAssignmentOrDeclarationExpression(){
    if(peek(0).getKind() == SyntaxKind.IdentifierKeyword && peek(1).getKind() == SyntaxKind.EqualsToken){
      SyntaxToken identifierToken = nextToken();
      SyntaxToken operatorToken = nextToken();
      ExpressionSyntax right = ParseAssignmentOrDeclarationExpression();
      return new AssignmentExpressionSyntax(identifierToken, operatorToken, right);
    }
    else if((peek(0).getKind() == SyntaxKind.IntTypeKeywork || peek(0).getKind() == SyntaxKind.BooleanTypeKeyword)
            && peek(1).getKind() == SyntaxKind.IdentifierKeyword && peek(2).getKind() == SyntaxKind.SemicolonToken){
      SyntaxToken typeToken = nextToken();
      SyntaxToken identifierToken = nextToken();
      SyntaxToken semicolonToken = nextToken();
      return new DeclarationExpressionSyntax(typeToken, identifierToken, semicolonToken);
    }
    else if(peek(0).getKind() == SyntaxKind.IntTypeKeywork
            && peek(1).getKind() == SyntaxKind.OpenBracketsToken && peek(2).getKind() == SyntaxKind.CloseBracketsToken
            && peek(3).getKind() == SyntaxKind.IdentifierKeyword && peek(4).getKind() == SyntaxKind.SemicolonToken){
      SyntaxToken typeToken = nextToken();
      nextToken(); // Open Brackets
      nextToken(); // Close Brackets
      SyntaxToken arrayTypeToken = new SyntaxToken(SyntaxKind.ArrayTypeToken, typeToken.getPosition(), "int []", null);
      SyntaxToken identifierToken = nextToken();
      SyntaxToken semicolonToken = nextToken();
      return new DeclarationExpressionSyntax(arrayTypeToken, identifierToken, semicolonToken);
    }
    else if(peek(0).getKind() == SyntaxKind.AllocationKeyword
            && (peek(1).getKind() == SyntaxKind.IntTypeKeywork || (peek(1).getKind() == SyntaxKind.IdentifierKeyword))){
      SyntaxToken allocationToken = nextToken();
      SyntaxToken typeToken = nextToken();
      ExpressionSyntax initializationExpression = ParseAssignmentOrDeclarationExpression();
      return new AllocationExpressionSyntax(allocationToken, typeToken, initializationExpression);
    }
    return ParseBinaryExpression(0);
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

  private ExpressionSyntax parsePrimaryExpression(){
    if(current().getKind() == SyntaxKind.OpenParenthesisToken){
      SyntaxToken left = nextToken();
      ExpressionSyntax expression = ParseExpression();
      SyntaxToken right = match(SyntaxKind.CloseParenthesisToken);
      return new ParenthesisExpressionSyntax(left, expression, right);
    }
    if(current().getKind() == SyntaxKind.OpenBracketsToken){
      SyntaxToken left = nextToken();
      ExpressionSyntax expression = ParseExpression();
      SyntaxToken right = match(SyntaxKind.CloseBracketsToken);
      return new BracketsExpressionSyntax(left, expression, right);
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