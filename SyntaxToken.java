public class SyntaxToken extends SyntaxNode{
  private SyntaxKind _kind;
  private int _position;
  private String _text;
  private Object _value;
  
  public SyntaxToken(SyntaxKind kind, int position, String text, Object value){
    _kind = kind;
    _position = position;
    _text = text;
    _value = value;
  }

  public SyntaxKind getKind(){
    return _kind;
  }

  public int getPosition(){
    return _position;
  }

  public String getText(){
    return _text;
  }

  public Object getValue(){
    return _value;
  }

  public List<SyntaxNode> getChildren(){
    return new ArrayList<SyntaxNode>();
  }
}