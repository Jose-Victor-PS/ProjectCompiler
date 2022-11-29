package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class ParenthesisExpressionSyntax extends ExpressionSyntax {
    private SyntaxNode _openingToken;
    private ExpressionSyntax _expression;
    private SyntaxNode _closingToken;

    public ParenthesisExpressionSyntax(SyntaxNode openingToken, ExpressionSyntax expression, SyntaxNode closingToken){
        _openingToken = openingToken;
        _expression = expression;
        _closingToken = closingToken;
    }

    public SyntaxNode getOpeningToken(){
        return _openingToken;
    }
    public SyntaxNode getClosingToken(){
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
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_openingToken, _expression, _closingToken));
    }
}
