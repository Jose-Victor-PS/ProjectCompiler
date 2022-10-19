public class Lexer{
  private String _text;
  private int _position;

  public Lexer(String text){
    _text = text;
  }

  public String getText(){
    return _text;
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

      int length = _position - start;
      String text = _text.substring(start, length);

      try {
        Object value = Integer.parseInt(text);
      } catch (NumberFormatException e) {
        Object value = null;
      }

      return new SyntaxToken(SyntaxKind.NumberToken, start, text, value);
    }

    if(Character.isWhitespace(current())){
      int start = _position;

      while(Character.isWhitespace(current())) next();

      int length = _position - start;
      String text = _text.substring(start, length);

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
  }
}