package Lexicon;

public class LexiconToken {
  private TokenKind _kind;
  private int _line;
  private String _text;
  private Object _value;
  
  public LexiconToken(TokenKind kind, int line, String text, Object value){
    _kind = kind;
    _line = line;
    _text = text;
    _value = value;
  }

  public TokenKind getKind(){
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
}