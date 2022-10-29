import java.util.ArrayList;

public class Lexer{
  private final String _text;
  private int _position;
  private ArrayList<String> _diagnostics = new ArrayList<>();

  public Lexer(String text){
    _text = text;
  }

  public String getText(){
    return _text;
  }
  public ArrayList<String> getDiagnostics(){
    return _diagnostics;
  }

  private char current(){
    if(_position >= _text.length()){
      return '\0';
    }
    else{
      return _text.charAt(_position);
    }
  }

  private void next(){
    _position++;
  }
  
  public SyntaxToken NextToken(){
    // Numbers
    // Operators
    // Whitespaces

    if(_position >= _text.length()){
      return new SyntaxToken(SyntaxKind.EndOfFileToken, _position, "\0", null);
    }
    
    if(Character.isDigit(current())){
      int start = _position;

      while(Character.isDigit(current())) next();

      String text = _text.substring(start, _position);

      Object value = null;
      try {
        value = Integer.parseInt(text);
      } catch (Exception e){
        _diagnostics.add(String.format("ERROR: The number %s cannot be represented by Integer32", _text));
      }

      return new SyntaxToken(SyntaxKind.NumberToken, start, text, value);
    }

    if(Character.isWhitespace(current())){
      int start = _position;

      while(Character.isWhitespace(current())) next();

      String text = _text.substring(start, _position);

      return new SyntaxToken(SyntaxKind.WhitespaceToken, start, text, null);
    }

    if(current() == '+'){
      return new SyntaxToken(SyntaxKind.PlusToken, _position++, "+", null);
    }
    else if (current() == '-')
      return new SyntaxToken(SyntaxKind.MinusToken, _position++, "-", null);
    else if (current() == '*')
      return new SyntaxToken(SyntaxKind.StarToken, _position++, "*", null);
    else if (current() == '/')
      return new SyntaxToken(SyntaxKind.SlashToken, _position++, "/", null);
    else if (current() == '(')
      return new SyntaxToken(SyntaxKind.OpenParenthesisToken, _position++, "(", null);
    else if (current() == ')')
      return new SyntaxToken(SyntaxKind.CloseParenthesisToken, _position++, ")", null);

    _diagnostics.add(String.format("ERROR: bad character: %s", current()));
    return new SyntaxToken(SyntaxKind.BadToken, _position++, _text.substring(_position - 1, _position), null);
  }
}