package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class NameExpressionSyntax extends ExpressionSyntax{

    private SyntaxToken _identifierToken;

    public NameExpressionSyntax(SyntaxToken identifierToken){
        _identifierToken = identifierToken;
    }

    public SyntaxToken getIdentifierToken(){
        return _identifierToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.NameExpression;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren() {
        return new ArrayList<SyntaxNode>(Arrays.asList(_identifierToken));
    }
}
