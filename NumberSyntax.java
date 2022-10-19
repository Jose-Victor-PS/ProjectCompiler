public class NumberSyntax extends ExpressionSyntax{
  private SyntaxToken _numberToken;
  
  public NumberSyntax(SyntaxToken numberToken){
    _numberToken = numberToken;
  }

  public SyntaxKind getKind(){
    return SyntaxKind.NumberExpression;
  }

  public SyntaxToken getToken(){
    return _numberToken;
  }

  public List<SyntaxToken> getChildren(){
    return new List<SyntaxToken>([_numberToken]);
  }
}