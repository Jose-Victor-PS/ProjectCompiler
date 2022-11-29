package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class AllocationExpressionSyntax extends ExpressionSyntax{
    SyntaxNode _allocationToken;
    SyntaxNode _typeToken;
    SyntaxNode _openingToken;
    ExpressionSyntax _initializationExpression;
    SyntaxNode _closingToken;

    public AllocationExpressionSyntax(SyntaxNode allocationToken, SyntaxNode typeToken, SyntaxNode openingToken, ExpressionSyntax initializationExpression, SyntaxNode closingToken) {
        _allocationToken = allocationToken;
        _typeToken = typeToken;
        _openingToken = openingToken;
        _initializationExpression = initializationExpression;
        _closingToken = closingToken;
    }

    public SyntaxNode getAllocationToken(){
        return _allocationToken;
    }
    public SyntaxNode getTypeToken(){
        return _typeToken;
    }
    public SyntaxNode getOpeningToken() { return _openingToken; }
    public ExpressionSyntax getInitializationExpression(){
        return _initializationExpression;
    }
    public SyntaxNode getClosingToken() { return _closingToken; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.AllocationExpression;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_allocationToken, _typeToken, _openingToken, _initializationExpression, _closingToken));
    }
}