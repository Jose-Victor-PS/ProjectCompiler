package Binder;

import Syntax.VariableSymbol;

public class BoundAssignmentExpression extends BoundExpression{
    private VariableSymbol _variable;
    private BoundExpression _expression;

    public BoundAssignmentExpression(VariableSymbol variable, BoundExpression expression){
        _variable = variable;
        _expression = expression;
    }

    public VariableSymbol getVariable(){
        return _variable;
    }

    public BoundExpression getExpression(){
        return _expression;
    }

    @Override
    public Class<?> getType() {
        return _expression.getType();
    }

    @Override
    public BoundNodeKind getKind() {
        return BoundNodeKind.AssignmentExpression;
    }
}
