package Syntax;

import java.util.ArrayList;

public abstract class SyntaxNode{
  private SyntaxKind _kind;

  public abstract SyntaxKind getKind();

  public abstract ArrayList<SyntaxNode> getChildren();
}