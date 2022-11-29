package Syntax;

import java.util.ArrayList;

public abstract class SyntaxEntity {
    public abstract SyntaxKind getKind();

    public abstract ArrayList<SyntaxEntity> getChildren();
}
