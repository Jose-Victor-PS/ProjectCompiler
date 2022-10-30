package Syntax;

import java.util.ArrayList;

public abstract class SyntaxNode{

  public abstract SyntaxKind getKind();

  public abstract ArrayList<SyntaxNode> getChildren();
}