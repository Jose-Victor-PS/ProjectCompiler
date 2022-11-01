package Binder;

import Syntax.VariableSymbol;

import java.util.ArrayList;

public class BoundGlobalScope {
    private BoundGlobalScope _previous;
    private ArrayList<String> _diagnostics;
    private ArrayList<VariableSymbol> _variables;
    private BoundExpression _expression;

    public BoundGlobalScope(BoundGlobalScope previous, ArrayList<String> diagnostics, ArrayList<VariableSymbol> variables, BoundExpression expression){
        _previous = previous;
        _diagnostics = diagnostics;
        _variables = variables;
        _expression = expression;
    }

    public BoundGlobalScope getPrevious(){
        return _previous;
    }
    public ArrayList<String> getDiagnostics(){
        return _diagnostics;
    }
    public ArrayList<VariableSymbol> getVariables(){
        return _variables;
    }
    public BoundExpression getExpression(){
        return _expression;
    }
}
