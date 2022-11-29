package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;

public class BadExpressionSyntax extends ExpressionSyntax {
    private SyntaxNode _token;

    public BadExpressionSyntax(SyntaxNode token){
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
