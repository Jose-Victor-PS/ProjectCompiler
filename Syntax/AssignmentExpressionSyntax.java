package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class AssignmentExpressionSyntax extends ExpressionSyntax{
    private SyntaxToken _identifierToken;
    private SyntaxToken _equalsToken;
    private ExpressionSyntax _expression;

    public AssignmentExpressionSyntax(SyntaxToken identifierToken, SyntaxToken equalsToken, ExpressionSyntax expression){
        _identifierToken = identifierToken;
        _equalsToken = equalsToken;
        _expression = expression;
    }

    public SyntaxToken getIdentifierToken(){
        return _identifierToken;
    }
    public ExpressionSyntax getExpression(){
        return _expression;
    }
    public SyntaxToken getEqualsToken(){
        return _equalsToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.AssignmentExpression;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren() {
        return new ArrayList<SyntaxNode>(Arrays.asList(_identifierToken, _equalsToken, _expression));
    }
}
