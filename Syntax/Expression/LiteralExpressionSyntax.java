package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class LiteralExpressionSyntax extends ExpressionSyntax{
  private SyntaxNode _literalToken;
  private Object _value;

  public LiteralExpressionSyntax(SyntaxNode numberToken){
    _literalToken = numberToken;
    _value = numberToken.getValue();
  }


  public LiteralExpressionSyntax(SyntaxNode numberToken, Object value){
    _literalToken = numberToken;
    _value = value;
  }

  @Override
  public SyntaxKind getKind(){
    return SyntaxKind.LiteralExpression;
  }

  public SyntaxNode getToken(){
    return _literalToken;
  }
  public Object getValue(){
    return _value;
  }

  @Override
  public ArrayList<SyntaxEntity> getChildren(){
    return new ArrayList<SyntaxEntity>(Arrays.asList(_literalToken));
  }
}