import java.util.ArrayList;
import java.util.Arrays;

public class LiteralExpressionSyntax extends ExpressionSyntax{
  private SyntaxToken _literalToken;
  
  public LiteralExpressionSyntax(SyntaxToken numberToken){
    _literalToken = numberToken;
  }

  @Override
  public SyntaxKind getKind(){
    return SyntaxKind.NumberExpression;
  }

  public SyntaxToken getToken(){
    return _literalToken;
  }

  @Override
  public ArrayList<SyntaxNode> getChildren(){
    return new ArrayList<SyntaxNode>(Arrays.asList(_literalToken));
  }
}