package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class LookUpExpressionSyntax extends ExpressionSyntax {
    private ExpressionSyntax _arrayExpression;
    private SyntaxNode _openingToken;
    private ExpressionSyntax _lookUpExpression;
    private SyntaxNode _closingToken;

    public LookUpExpressionSyntax(ExpressionSyntax arrayExpression, SyntaxNode openingToken, ExpressionSyntax lookUpExpression, SyntaxNode closingToken) {
        _arrayExpression = arrayExpression;
        _openingToken = openingToken;
        _lookUpExpression = lookUpExpression;
        _closingToken = closingToken;
    }

    public SyntaxNode getOpeningToken(){
        return _openingToken;
    }
    public SyntaxNode getClosingToken(){
        return _closingToken;
    }
    public ExpressionSyntax getArrayExpression(){
        return _arrayExpression;
    }
    public ExpressionSyntax getLookUpExpression() { return _lookUpExpression; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.LookUpExpression;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_arrayExpression, _openingToken, _lookUpExpression, _closingToken));
    }
}