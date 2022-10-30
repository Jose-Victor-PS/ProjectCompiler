package Binder;

import java.lang.reflect.Type;

public class BoundLiteralExpression extends BoundExpression{
    private Object _value;

    public BoundLiteralExpression(Object value){
        _value = value;
    }

    public Object getValue(){
        return _value;
    }

    @Override
    public Class<?> getType() {
        return _value.getClass();
    }

    @Override
    public BoundNodeKind getKind() {
        return BoundNodeKind.LiteralExpression;
    }
}
