package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class ParenthesisExpressionSyntax extends ExpressionSyntax {
    private SyntaxToken _openingToken;
    private ExpressionSyntax _expression;
    private SyntaxToken _closingToken;

    public ParenthesisExpressionSyntax(SyntaxToken openingToken, ExpressionSyntax expression, SyntaxToken closingToken){
        _openingToken = openingToken;
        _expression = expression;
        _closingToken = closingToken;
    }

    public SyntaxToken getOpeningToken(){
        return _openingToken;
    }
    public SyntaxToken getClosingToken(){
        return _closingToken;
    }
    public ExpressionSyntax getExpression(){
        return _expression;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.ParenthesisExpression;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren() {
        return new ArrayList<SyntaxNode>(Arrays.asList(_openingToken, _expression, _closingToken));
    }
}