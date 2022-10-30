package Binder;

import java.lang.reflect.Type;

public class BoundBinaryExpression extends BoundExpression{
    private BoundExpression _left;
    private BoundExpression _right;
    private BoundBinaryOperatorKind _operatorKind;

    public BoundBinaryExpression(BoundExpression left, BoundBinaryOperatorKind operatorKind, BoundExpression right){
        _left = left;
        _right = right;
        _operatorKind = operatorKind;
    }

    public BoundExpression getLeft(){
        return _left;
    }
    public BoundExpression getRight(){
        return _right;
    }
    public BoundBinaryOperatorKind getOperatorKind(){
        return _operatorKind;
    }

    @Override
    public Class<?> getType() {
        return _left.getType();
    }

    @Override
    public BoundNodeKind getKind() {
        return BoundNodeKind.BinaryExpression;
    }
}
