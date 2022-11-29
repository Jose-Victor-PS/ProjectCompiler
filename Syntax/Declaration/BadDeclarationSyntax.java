package Syntax.Declaration;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;

public class BadDeclarationSyntax extends DeclarationSyntax{
    private SyntaxNode _token;

    public BadDeclarationSyntax(SyntaxNode token){
        _token = token;
    }
    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.BadToken;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>();
    }
}
