package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class MethodCallExpressionSyntax extends ExpressionSyntax {
    private ExpressionSyntax _primaryExpression;
    private SyntaxNode _dotToken;
    private SyntaxNode _methodName;
    private SyntaxNode _openingParenthesis;
    private ExpressionSyntax _firstArgument;
    private ArrayList<SyntaxEntity> _expressionList;
    private SyntaxNode _closingParenthesis;
    public MethodCallExpressionSyntax(ExpressionSyntax primaryExpression, SyntaxNode dotToken, SyntaxNode methodName, SyntaxNode openingParenthesis,
                                      ExpressionSyntax firstArgument, ArrayList<SyntaxEntity> expressionList, SyntaxNode closingParenthesis) {
        _primaryExpression = primaryExpression;
        _dotToken = dotToken;
        _methodName = methodName;
        _openingParenthesis = openingParenthesis;
        _firstArgument = firstArgument;
        _expressionList = expressionList;
        _closingParenthesis = closingParenthesis;
    }

    public ExpressionSyntax getPrimaryExpression() { return _primaryExpression; }
    public SyntaxNode getDotToken() { return _dotToken; }
    public SyntaxNode getMethodName() { return _methodName; }
    public SyntaxNode getOpeningParenthesis() { return _openingParenthesis; }
    public ExpressionSyntax getFirstArgument() { return _firstArgument; }
    public ArrayList<SyntaxEntity> getExpressionList() { return _expressionList; }
    public SyntaxNode getClosingParenthesis() { return _closingParenthesis; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.MethodCallExpression;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        ArrayList<SyntaxEntity> children = new ArrayList<SyntaxEntity>(Arrays.asList(_primaryExpression, _dotToken, _methodName, _openingParenthesis));
        if(_firstArgument != null) children.add(_firstArgument);
        if(_expressionList != null) children.addAll(_expressionList);
        children.add(_closingParenthesis);
        return children;
    }
}
