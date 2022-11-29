package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class ArrayLengthExpressionSyntax extends ExpressionSyntax {
    private ExpressionSyntax _primaryExpression;
    private SyntaxNode _dotToken;
    private SyntaxNode _lengthKeyword;
    public ArrayLengthExpressionSyntax(ExpressionSyntax primaryExpression, SyntaxNode dotToken, SyntaxNode lengthKeyword) {
        _primaryExpression = primaryExpression;
        _dotToken = dotToken;
        _lengthKeyword = lengthKeyword;
    }

    public ExpressionSyntax getPrimaryExpression() { return _primaryExpression; }
    public SyntaxNode getDotToken() { return _dotToken; }
    public SyntaxNode getLengthKeyword() { return _lengthKeyword; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.ArrayLengthExpression;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_primaryExpression, _dotToken, _lengthKeyword));
    }
}
