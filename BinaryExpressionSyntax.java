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

  public SyntaxKind getKind(){
    return SyntaxKind.BinaryExpression;
  }

  public List<SyntaxToken> getChildren(){
    return new List<SyntaxToken>([_left, _operator, _right]);
  }
}