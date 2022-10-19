public abstract class SyntaxNode{
  private SyntaxKind _kind;

  public abstract SyntaxKind getKind();

  public abstract List<SyntaxNode> getChildren();
}