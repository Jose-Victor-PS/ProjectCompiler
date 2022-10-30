package Binder;

import Syntax.VariableSymbol;

public class BoundVariableExpression extends BoundExpression{
    private VariableSymbol _variable;

    public BoundVariableExpression(VariableSymbol variable){
        _variable = variable;
    }

    public VariableSymbol getVariable(){
        return _variable;
    }

    @Override
    public Class<?> getType() {
        return _variable.getType();
    }

    @Override
    public BoundNodeKind getKind() {
        return BoundNodeKind.VariableExpression;
    }
}
