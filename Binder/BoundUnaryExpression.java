package Binder;

import java.lang.reflect.Type;

public class BoundUnaryExpression extends BoundExpression{
    private BoundUnaryOperator _operator;
    private BoundExpression _operand;

    public BoundUnaryExpression(BoundUnaryOperator operator, BoundExpression operand){
        _operator = operator;
        _operand = operand;
    }

    public BoundExpression getOperand(){
        return _operand;
    }

    public BoundUnaryOperator getOperatorKind(){
        return _operator;
    }

    @Override
    public BoundNodeKind getKind(){
        return BoundNodeKind.UnaryExpression;
    }

    @Override
    public Class<?> getType(){
        return _operator.getResultType();
    }
}
