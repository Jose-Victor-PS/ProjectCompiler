package Lexicon;

import java.util.ArrayList;

public class Lexer{
  private final String _text;
  private int _position;
  private int _currentLine = 1;
  private ArrayList<String> _diagnostics = new ArrayList<>();
  private boolean _inLineComment = false;
  private boolean _inMultiComment = false;

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

  public ArrayList<LexiconToken> ScanSourceCode(){
    ArrayList<LexiconToken> tokens = new ArrayList<LexiconToken>();

    LexiconToken token;
    do{
      token = this.Lex();

      if(token.getKind() != TokenKind.IgnorableToken){
        tokens.add(token);
      }
    } while(token.getKind() != TokenKind.EndOfFileToken);

    return tokens;
  }

  private LexiconToken Lex(){

    if(_position >= _text.length()){
      return new LexiconToken(TokenKind.EndOfFileToken, _currentLine, "EOF", null);
    }
    if (current() == '\n') _currentLine++;

    int start = _position;

    if(Character.isDigit(current())){

      while(Character.isDigit(current())) next();

      String text = _text.substring(start, _position);

      Object value = null;
      try {
        value = Integer.parseInt(text);
      } catch (Exception e){
        _diagnostics.add(String.format("At line %s: The number %s cannot be represented by Integer32", _currentLine, _text));
      }

      return new LexiconToken(TokenKind.NumberToken, _currentLine, text, value);
    }

    if(isIgnorableCharacter()){

      while(isIgnorableCharacter()) next();

      String text = _text.substring(start, _position);

      return new LexiconToken(TokenKind.IgnorableToken, _currentLine, text, null);
    }

    if(Character.isLetter(current())){

      while(Character.isLetter(current())) next();

      String text = _text.substring(start, _position);
      TokenKind kind = LexiconFacts.getKeywordKind(text);

      return new LexiconToken(kind, _currentLine, text, null);
    }

    switch (current()) {
      case '+':
        next();
        return new LexiconToken(TokenKind.PlusToken, _currentLine, "+", null);
      case '-':
        next();
        return new LexiconToken(TokenKind.MinusToken, _currentLine, "-", null);
      case '*':
        next();
        return new LexiconToken(TokenKind.StarToken, _currentLine, "*", null);
      case '(':
        next();
        return new LexiconToken(TokenKind.OpenParenthesisToken, _currentLine, "(", null);
      case ')':
        next();
        return new LexiconToken(TokenKind.CloseParenthesisToken, _currentLine, ")", null);
      case '[':
        next();
        return new LexiconToken(TokenKind.OpenBracketsToken, _currentLine, "[", null);
      case ']':
        next();
        return new LexiconToken(TokenKind.CloseBracketsToken, _currentLine, "]", null);
      case '{':
        next();
        return new LexiconToken(TokenKind.OpenScopeToken, _currentLine, "{", null);
      case '}':
        next();
        return new LexiconToken(TokenKind.CloseScopeToken, _currentLine, "}", null);
      case '!':
        next();
        return new LexiconToken(TokenKind.NegationToken, _currentLine, "!", null);
      case '<':
        next();
        return new LexiconToken(TokenKind.CompareToken, _currentLine, "<", null);
      case '=':
        next();
        return new LexiconToken(TokenKind.EqualsToken, _currentLine, "=", null);
      case ';':
        next();
        return new LexiconToken(TokenKind.SemicolonToken, _currentLine, ";", null);
      case ',':
        next();
        return new LexiconToken(TokenKind.CommaToken, _currentLine, ",", null);
      case '.':
        next();
        return new LexiconToken(TokenKind.DotToken, _currentLine, ".", null);
      case '&':
        if (lookAhead() == '&'){
          _position += 2;
          return new LexiconToken(TokenKind.AndToken, _currentLine, "&&", null);
        }
      case '/':
        if (lookAhead() == '/'){
          _inLineComment = true;
          _position += 2;
        }
        else if (lookAhead() == '*'){
          _inMultiComment = true;
          _position += 2;
        }
      default:
        _diagnostics.add(String.format("At line %s: bad character: %s", _currentLine, current()));
        next();
        return new LexiconToken(TokenKind.BadToken, _currentLine, _text.substring(_position - 1, _position), null);
    }
  }

  private boolean isIgnorableCharacter(){
    if (_inLineComment) {
      if (current() == '\n') {
        _inLineComment = false;
        next();
      }
      return true;
    }
    else if (_inMultiComment) {
      if(current() == '*' && peek(1) == '/') {
        _inMultiComment = false;
        _position += 2;
      }
      return true;
    }
    else {
      return Character.isWhitespace(current());
    }
  }
}