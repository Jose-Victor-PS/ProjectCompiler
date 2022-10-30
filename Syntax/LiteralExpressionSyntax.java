package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class LiteralExpressionSyntax extends ExpressionSyntax{
  private SyntaxToken _literalToken;
  private Object _value;

  public LiteralExpressionSyntax(SyntaxToken numberToken){
    _literalToken = numberToken;
    _value = numberToken.getValue();
  }


  public LiteralExpressionSyntax(SyntaxToken numberToken, Object value){
    _literalToken = numberToken;
    _value = value;
  }

  @Override
  public SyntaxKind getKind(){
    return SyntaxKind.LiteralExpression;
  }

  public SyntaxToken getToken(){
    return _literalToken;
  }
  public Object getValue(){
    return _value;
  }

  @Override
  public ArrayList<SyntaxNode> getChildren(){
    return new ArrayList<SyntaxNode>(Arrays.asList(_literalToken));
  }
}