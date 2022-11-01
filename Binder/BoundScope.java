package Binder;

import Syntax.VariableSymbol;

import java.util.ArrayList;
import java.util.HashMap;

public class BoundScope {
    private HashMap<String, VariableSymbol> _variables = new HashMap<String, VariableSymbol>();
    private BoundScope _parent;

    public BoundScope(BoundScope parent){
        _parent = parent;
    }

    public BoundScope getParent(){
        return _parent;
    }

    public boolean TryDeclare(VariableSymbol variable){
        if(_variables.containsKey(variable.getName())) return false;
        _variables.put(variable.getName(), variable);
        return true;
    }

    public VariableSymbol TryLookup(String name){
        VariableSymbol variable = _variables.get(name);
        if(variable != null) return variable;
        if(_parent == null) return null;
        return _parent.TryLookup(name);
    }

    public ArrayList<VariableSymbol> getDeclaredVariables(){
        return new ArrayList<VariableSymbol>(_variables.values());
    }
}
