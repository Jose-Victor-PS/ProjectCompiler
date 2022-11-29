package Syntax;

import java.util.ArrayList;

public class SyntaxNode extends SyntaxEntity{
  private SyntaxKind _kind;
  private int _line;
  private String _text;
  private Object _value;

  public SyntaxNode(SyntaxKind kind, int line, String text, Object value){
    _kind = kind;
    _line = line;
    _text = text;
    _value = value;
  }

  @Override
  public SyntaxKind getKind(){
    return _kind;
  }

  public int getLine(){
    return _line;
  }

  public String getText(){
    return _text;
  }

  public Object getValue(){
    return _value;
  }

  @Override
  public ArrayList<SyntaxEntity> getChildren(){
    return new ArrayList<SyntaxEntity>();
  }
}