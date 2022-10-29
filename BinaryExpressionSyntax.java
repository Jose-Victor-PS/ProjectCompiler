import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

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
  public ArrayList<SyntaxNode> getChildren(){
    return new ArrayList<SyntaxNode>(Arrays.asList(_left, _operator, _right));
  }
}