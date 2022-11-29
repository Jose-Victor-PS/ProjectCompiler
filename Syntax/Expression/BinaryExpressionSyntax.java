package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class BinaryExpressionSyntax extends ExpressionSyntax{
  private ExpressionSyntax _left;
  private SyntaxNode _operator;
  private ExpressionSyntax _right;
  
  public BinaryExpressionSyntax(ExpressionSyntax left, SyntaxNode operator, ExpressionSyntax right){
    _left = left;
    _operator = operator;
    _right = right;
  }

  public ExpressionSyntax getLeft(){
    return _left;
  }

  public ExpressionSyntax getRight(){
    return _right;
  }

  public SyntaxNode getOperator(){
    return _operator;
  }

  @Override
  public SyntaxKind getKind(){
    return SyntaxKind.BinaryExpression;
  }

  @Override
  public ArrayList<SyntaxEntity> getChildren(){
    return new ArrayList<SyntaxEntity>(Arrays.asList(_left, _operator, _right));
  }
}