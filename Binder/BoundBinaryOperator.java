package Binder;

import Syntax.SyntaxKind;

public class BoundBinaryOperator {
    private SyntaxKind _syntaxKind;
    private BoundBinaryOperatorKind _kind;
    private Class<?> _leftType;
    private Class<?> _rightType;
    private Class<?> _resultType;

    public BoundBinaryOperator(SyntaxKind syntaxKind, BoundBinaryOperatorKind kind, Class<?> type) {
        this(syntaxKind, kind, type, type, type);
    }

    public BoundBinaryOperator(SyntaxKind syntaxKind, BoundBinaryOperatorKind kind, Class<?> operandType, Class<?> resultType) {
        this(syntaxKind, kind, operandType, operandType, resultType);
    }

    public BoundBinaryOperator(SyntaxKind syntaxKind, BoundBinaryOperatorKind kind, Class<?> leftType, Class<?> rightType, Class<?> resultType) {
        _syntaxKind = syntaxKind;
        _kind = kind;
        _leftType = leftType;
        _rightType = rightType;
        _resultType = resultType;
    }

    public SyntaxKind getSyntaxKind() {
        return _syntaxKind;
    }

    public BoundBinaryOperatorKind getKind() {
        return _kind;
    }

    public Class<?> getLeftType() {
        return _leftType;
    }

    public Class<?> getRightType() {
        return _rightType;
    }

    public Class<?> getResultType() {
        return _resultType;
    }

    private static BoundBinaryOperator[] _operators =
    {
            new BoundBinaryOperator(SyntaxKind.PlusToken, BoundBinaryOperatorKind.Addition, Integer.class),
            new BoundBinaryOperator(SyntaxKind.MinusToken, BoundBinaryOperatorKind.Subtraction, Integer.class),
            new BoundBinaryOperator(SyntaxKind.StarToken, BoundBinaryOperatorKind.Multiplication, Integer.class),
            new BoundBinaryOperator(SyntaxKind.AndToken, BoundBinaryOperatorKind.LogicalAnd, Boolean.class),
            new BoundBinaryOperator(SyntaxKind.CompareToken, BoundBinaryOperatorKind.Comparison, Integer.class, Boolean.class)
    };

    public static BoundBinaryOperator Bind(SyntaxKind syntaxKind, Class<?> leftType, Class<?> rightType) {
        for (BoundBinaryOperator op : _operators) {
            if (op._syntaxKind == syntaxKind && op._leftType == leftType && op._rightType == rightType)
                return op;
        }

        return null;
    }
}