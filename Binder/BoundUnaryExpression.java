package Binder;

import java.lang.reflect.Type;

public class BoundUnaryExpression extends BoundExpression{
    private BoundUnaryOperatorKind _operatorKind;
    private BoundExpression _operand;

    public BoundUnaryExpression(BoundUnaryOperatorKind operatorKind, BoundExpression operand){
        _operatorKind = operatorKind;
        _operand = operand;
    }

    public BoundExpression getOperand(){
        return _operand;
    }

    public BoundUnaryOperatorKind getOperatorKind(){
        return _operatorKind;
    }

    @Override
    public BoundNodeKind getKind(){
        return BoundNodeKind.UnaryExpression;
    }

    @Override
    public Class<?> getType(){
        return _operand.getType();
    }
}
