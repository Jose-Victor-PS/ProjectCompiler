package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class NameExpressionSyntax extends ExpressionSyntax{

    private SyntaxNode _identifierToken;

    public NameExpressionSyntax(SyntaxNode identifierToken){
        _identifierToken = identifierToken;
    }

    public SyntaxNode getIdentifierToken(){
        return _identifierToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.NameExpression;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_identifierToken));
    }
}
