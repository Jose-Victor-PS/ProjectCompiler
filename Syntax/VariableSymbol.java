package Syntax;

public class VariableSymbol {
    private String _name;
    private Class<?> _type;
    public VariableSymbol(String name, Class<?> type){
        _name = name;
        _type = type;
    }

    @Override
    public boolean equals(Object o){
        if(!(o instanceof VariableSymbol)) return false;
        return ((VariableSymbol) o).getName().equals(_name) && ((VariableSymbol) o).getType() == _type;
    }

    public String getName(){
        return _name;
    }

    public Class<?> getType(){
        return _type;
    }
}
