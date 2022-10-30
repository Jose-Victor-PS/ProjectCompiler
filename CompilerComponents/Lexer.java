package CompilerComponents;

import Syntax.SyntaxFacts;
import Syntax.SyntaxKind;
import Syntax.SyntaxToken;

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
    return peek(0);
  }

  private char lookAhead(){
    return peek(1);
  }

  private char peek(int offset){
    int index = _position + offset;
    if(index >= _text.length()){
      return '\0';
    }
    else{
      return _text.charAt(index);
    }
  }

  private void next(){
    _position++;
  }
  
  public SyntaxToken Lex(){
    // Numbers
    // Operators
    // Whitespaces

    if(_position >= _text.length()){
      return new SyntaxToken(SyntaxKind.EndOfFileToken, _position, "\0", null);
    }

    int start = _position;

    if(Character.isDigit(current())){

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

      while(Character.isWhitespace(current())) next();

      String text = _text.substring(start, _position);

      return new SyntaxToken(SyntaxKind.WhitespaceToken, start, text, null);
    }

    if(Character.isLetter(current())){

      while(Character.isLetter(current())) next();

      String text = _text.substring(start, _position);
      SyntaxKind kind = SyntaxFacts.getKeywordKind(text);

      return new SyntaxToken(kind, start, text, null);
    }

    switch (current()) {
      case '+':
        return new SyntaxToken(SyntaxKind.PlusToken, _position++, "+", null);
      case '-':
        return new SyntaxToken(SyntaxKind.MinusToken, _position++, "-", null);
      case '*':
        return new SyntaxToken(SyntaxKind.StarToken, _position++, "*", null);
      case '(':
        return new SyntaxToken(SyntaxKind.OpenParenthesisToken, _position++, "(", null);
      case ')':
        return new SyntaxToken(SyntaxKind.CloseParenthesisToken, _position++, ")", null);
      case '!':
        return new SyntaxToken(SyntaxKind.NegationToken, _position++, "!", null);
      case '<':
        return new SyntaxToken(SyntaxKind.CompareToken, _position++, "<", null);
      case '=':
        return new SyntaxToken(SyntaxKind.EqualsToken, _position++, "=", null);
      case '&':
        if (lookAhead() == '&'){
          _position += 2;
          return new SyntaxToken(SyntaxKind.AndToken, start, "&&", null);
        }
      default:
        _diagnostics.add(String.format("ERROR: bad character: %s", current()));
        return new SyntaxToken(SyntaxKind.BadToken, _position++, _text.substring(_position - 1, _position), null);
    }
  }
}