package Binder;

import java.lang.reflect.Type;

public class BoundBinaryExpression extends BoundExpression{
    private BoundExpression _left;
    private BoundExpression _right;
    private BoundBinaryOperator _operator;

    public BoundBinaryExpression(BoundExpression left, BoundBinaryOperator operator, BoundExpression right){
        _left = left;
        _right = right;
        _operator = operator;
    }

    public BoundExpression getLeft(){
        return _left;
    }
    public BoundExpression getRight(){
        return _right;
    }
    public BoundBinaryOperator getOperatorKind(){
        return _operator;
    }

    @Override
    public Class<?> getType() {
        return _operator.getResultType();
    }

    @Override
    public BoundNodeKind getKind() {
        return BoundNodeKind.BinaryExpression;
    }
}
