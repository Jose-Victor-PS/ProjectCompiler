package Binder;

import Syntax.SyntaxKind;

public class BoundUnaryOperator {
    private SyntaxKind _syntaxKind;
    private BoundUnaryOperatorKind _kind;
    private Class<?> _operandType;
    private Class<?> _resultType;

    private BoundUnaryOperator(SyntaxKind syntaxKind, BoundUnaryOperatorKind kind, Class<?> operandType)
    {
        this(syntaxKind, kind, operandType, operandType);
    }

    private BoundUnaryOperator(SyntaxKind syntaxKind, BoundUnaryOperatorKind kind, Class<?> operandType, Class<?> resultType)
    {
        _syntaxKind = syntaxKind;
        _kind = kind;
        _operandType = operandType;
        _resultType = resultType;
    }

    public SyntaxKind getSyntaxKind(){
        return _syntaxKind;
    }
    public BoundUnaryOperatorKind getKind(){
        return _kind;
    }
    public Class<?> getOperandType(){
        return _operandType;
    }
    public Class<?> getResultType(){
        return _resultType;
    }

    private static BoundUnaryOperator[] _operators =
    {
        new BoundUnaryOperator(SyntaxKind.NegationToken, BoundUnaryOperatorKind.LogicalNegation, Boolean.class),
        new BoundUnaryOperator(SyntaxKind.MinusToken, BoundUnaryOperatorKind.Negation, Integer.class)
    };

    public static BoundUnaryOperator Bind(SyntaxKind syntaxKind, Class<?> operandType) {
        for(BoundUnaryOperator op : _operators) {
            if (op._syntaxKind == syntaxKind && op._operandType == operandType)
                return op;
        }
        return null;
    }
}
