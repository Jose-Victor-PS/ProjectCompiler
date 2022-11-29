package Syntax.Declaration;

import Syntax.Expression.ExpressionSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class VariableDeclarationSyntax extends DeclarationSyntax {
    private SyntaxNode _typeToken;
    private SyntaxNode _identifierToken;
    public VariableDeclarationSyntax(SyntaxNode typeToken, SyntaxNode identifierToken) {
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
        return SyntaxKind.VariableDeclaration;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_typeToken, _identifierToken));
    }
}