package Syntax.Declaration;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class FormalParameterSyntax extends DeclarationSyntax {
    private SyntaxNode _typeToken;
    private SyntaxNode _identifierToken;
    public FormalParameterSyntax(SyntaxNode typeToken, SyntaxNode identifierToken) {
        _typeToken = typeToken;
        _identifierToken = identifierToken;
    }

    public SyntaxNode getTypeToken(){
        return _typeToken;
    }

    public SyntaxNode getIdentifierToken(){
        return _identifierToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.FormalParameter;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_typeToken, _identifierToken));
    }
}
