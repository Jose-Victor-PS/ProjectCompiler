package Syntax;

import Lexicon.LexiconToken;
import Syntax.Declaration.*;
import Syntax.Expression.*;
import Syntax.Statement.*;

import java.util.ArrayList;

public class Parser{
  private ArrayList<SyntaxNode> _tokens;
  private int _position;
  private ArrayList<String> _diagnostics = new ArrayList<>();

  public ArrayList<String> getDiagnostics(){
    return _diagnostics;
  }

  public Parser(ArrayList<LexiconToken> tokens){
    _tokens = new ArrayList<>();
    for(LexiconToken token : tokens){
      _tokens.add(new SyntaxNode(token.getKind().toSyntax(), token.getLine(), token.getText(), token.getValue()));
    }
  }

  private SyntaxNode peek(int offset){
    int index = _position + offset;
    if(index >= _tokens.size()) return _tokens.get(_tokens.size() - 1);
    else return _tokens.get(index);
  }

  private SyntaxNode current(){
    return peek(0);
  }

  private SyntaxNode lookAhead(){
    return peek(1);
  }

  private SyntaxNode nextToken(){
    SyntaxNode current = current();
    _position++;
    return current;
  }

  private SyntaxNode match(SyntaxKind kind){
    if(current().getKind() == kind) return nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, expected <%s>", current().getLine(), current().getKind(), kind));
    return new SyntaxNode(kind, current().getLine(), null, null);
  }

  private boolean optionalMatch(SyntaxKind kind){
    return (current().getKind() == kind);
  }

  public SyntaxTree Parse(){
    SyntaxNode lastToken;
    DeclarationSyntax mainClass = ParseMainClassDeclaration();
    ArrayList<DeclarationSyntax> classesDeclarationList = ParseClassDeclarationList();
    lastToken = match(SyntaxKind.EndOfFileToken);
    ProgramSyntax program = new ProgramSyntax(mainClass, classesDeclarationList, lastToken);
    return new SyntaxTree(_diagnostics, program);
  }

  private DeclarationSyntax ParseMainClassDeclaration() {
    if(current().getKind() == SyntaxKind.ClassKeyword) {
      SyntaxNode classKeyword = nextToken();
      SyntaxNode className = match(SyntaxKind.IdentifierKeyword);
      SyntaxNode openScope = match(SyntaxKind.OpenScopeToken);
      SyntaxNode publicKeyword = match(SyntaxKind.PublicKeyword);
      SyntaxNode staticKeyword = match(SyntaxKind.StaticKeyword);
      SyntaxNode voidKeyword = match(SyntaxKind.VoidKeyword);
      SyntaxNode mainKeyword = match(SyntaxKind.MainKeyword);
      SyntaxNode openParenthesis = match(SyntaxKind.OpenParenthesisToken);
      SyntaxNode stringKeyword = match(SyntaxKind.StringKeyword);
      SyntaxNode openBrackets = match(SyntaxKind.OpenBracketsToken);
      SyntaxNode closeBrackets = match(SyntaxKind.CloseBracketsToken);
      SyntaxNode cmdArgsName = match(SyntaxKind.IdentifierKeyword);
      SyntaxNode closeParenthesis = match(SyntaxKind.CloseParenthesisToken);

      SyntaxNode openInnerScope = match(SyntaxKind.OpenScopeToken);
      ArrayList<DeclarationSyntax> variableDeclarationList = ParseVariableDeclarationList();
      ArrayList<StatementSyntax> statementList = ParseStatementList();
      SyntaxNode closeInnerScope = match(SyntaxKind.CloseScopeToken);

      SyntaxNode closeScope = match(SyntaxKind.CloseScopeToken);
      return new MainClassDeclarationSyntax(classKeyword, className, openScope, publicKeyword, staticKeyword, voidKeyword,
                                            mainKeyword, openParenthesis, stringKeyword, openBrackets, closeBrackets, cmdArgsName,
                                            closeParenthesis, openInnerScope, variableDeclarationList, statementList, closeInnerScope, closeScope);
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, expected Main Class", current().getLine(), current().getKind()));
    return new BadDeclarationSyntax(current());
  }

  ArrayList<DeclarationSyntax> ParseClassDeclarationList() {
    SyntaxKind current = current().getKind();
    ArrayList<DeclarationSyntax> classList = new ArrayList<>();
    while(current == SyntaxKind.ClassKeyword) {
      classList.add(ParseClassDeclaration());
      current = current().getKind();
    }
    if(classList.size() == 0) classList = null;
    return classList;
  }

  private DeclarationSyntax ParseClassDeclaration() {
    if(current().getKind() == SyntaxKind.ClassKeyword) {
      SyntaxNode classKeyword = nextToken();
      SyntaxNode className = match(SyntaxKind.IdentifierKeyword);
      SyntaxNode extendsKeyword;
      SyntaxNode superClass;
      if(optionalMatch(SyntaxKind.ExtendsKeyword)) {
        extendsKeyword = nextToken();
        superClass = match(SyntaxKind.IdentifierKeyword);
      } else {
        extendsKeyword = null;
        superClass = null;
      }
      SyntaxNode openScope = match(SyntaxKind.OpenScopeToken);
      ArrayList<DeclarationSyntax> variableDeclarationList = ParseVariableDeclarationList();
      ArrayList<DeclarationSyntax> methodDeclarationList = ParseMethodDeclarationList();
      SyntaxNode closeScope = match(SyntaxKind.CloseScopeToken);
      return new ClassDeclarationSyntax(classKeyword, className, extendsKeyword, superClass, openScope, variableDeclarationList, methodDeclarationList, closeScope);
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, expected Class Declaration", current().getLine(), current().getKind()));
    return new BadDeclarationSyntax(current());
  }

  private ArrayList<DeclarationSyntax> ParseMethodDeclarationList() {
    SyntaxKind current = current().getKind();
    ArrayList<DeclarationSyntax> methodList = new ArrayList<>();
    while(current == SyntaxKind.PublicKeyword) {
      methodList.add(ParseMethodDeclaration());
      current = current().getKind();
    }
    if(methodList.size() == 0) methodList = null;
    return methodList;
  }

  private DeclarationSyntax ParseMethodDeclaration() {
    if(current().getKind() == SyntaxKind.PublicKeyword) {
      SyntaxNode publicKeyword = nextToken();
      SyntaxNode type = ParseType();
      SyntaxNode methodName = match(SyntaxKind.IdentifierKeyword);
      SyntaxNode openingParenthesis = match(SyntaxKind.OpenParenthesisToken);
      DeclarationSyntax firstParameter;
      ArrayList<SyntaxEntity> parameterList;
      SyntaxNode closingParenthesis;
      if(optionalMatch(SyntaxKind.CloseParenthesisToken)) {
        closingParenthesis = nextToken();
        firstParameter = null;
        parameterList = null;
      }
      else {
        firstParameter = ParseFormalParameter();
        parameterList = ParseFormalParameterList();
        closingParenthesis = match(SyntaxKind.CloseParenthesisToken);
      }
      SyntaxNode openScope = match(SyntaxKind.OpenScopeToken);
      ArrayList<DeclarationSyntax> variableDeclarationList = ParseVariableDeclarationList();
      ArrayList<StatementSyntax> statementList = ParseStatementList();
      SyntaxNode returnKeyword = match(SyntaxKind.ReturnKeyword);
      ExpressionSyntax expression = ParseExpression();
      match(SyntaxKind.SemicolonToken);
      SyntaxNode closeScope = match(SyntaxKind.CloseScopeToken);
      return new MethodDeclarationSyntax(publicKeyword, type, methodName, openingParenthesis, firstParameter, parameterList, closingParenthesis,
              openScope, variableDeclarationList, statementList, returnKeyword, expression, closeScope);
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, expected method Declaration", current().getLine(), current().getKind()));
    return new BadDeclarationSyntax(current());
  }

  private DeclarationSyntax ParseFormalParameter() {
    SyntaxNode type = ParseType();
    if(type != null) {
      SyntaxNode identifier = match(SyntaxKind.IdentifierKeyword);
      return new FormalParameterSyntax(type, identifier);
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, expected Formal Parameter", current().getLine(), current().getKind()));
    return new BadDeclarationSyntax(current());
  }

  private ArrayList<SyntaxEntity> ParseFormalParameterList(){
    ArrayList<SyntaxEntity> formalParameterList = new ArrayList<>();
    while(current().getKind() == SyntaxKind.CommaToken) {
      SyntaxNode commaToken = nextToken();
      DeclarationSyntax nextParameter = ParseFormalParameter();
      formalParameterList.add(commaToken);
      formalParameterList.add(nextParameter);
    }
    if(formalParameterList.size() == 0) formalParameterList = null;
    return formalParameterList;
  }

  ArrayList<DeclarationSyntax> ParseVariableDeclarationList() {
    ArrayList<DeclarationSyntax> variableDeclarationList = new ArrayList<>();
    SyntaxKind current = current().getKind();
    SyntaxKind next = lookAhead().getKind();
    while(current == SyntaxKind.BooleanTypeKeyword || current == SyntaxKind.IntTypeKeyword ||
          current == SyntaxKind.IdentifierKeyword) {
      if(current == SyntaxKind.IdentifierKeyword && next != SyntaxKind.IdentifierKeyword) break;
      DeclarationSyntax variableDeclaration = ParseVariableDeclaration();
      match(SyntaxKind.SemicolonToken);
      variableDeclarationList.add(variableDeclaration);
      current = current().getKind();
      next = lookAhead().getKind();
    }
    if(variableDeclarationList.size() == 0) variableDeclarationList = null;
    return variableDeclarationList;
  }

  private DeclarationSyntax ParseVariableDeclaration(){
    SyntaxNode type = ParseType();
    if(type != null) {
      SyntaxNode identifier = match(SyntaxKind.IdentifierKeyword);
      return new VariableDeclarationSyntax(type, identifier);
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, expected Variable Declaration", current().getLine(), current().getKind()));
    return new BadDeclarationSyntax(current());
  }

  private SyntaxNode ParseType() {
    if(current().getKind() == SyntaxKind.BooleanTypeKeyword || current().getKind() == SyntaxKind.IdentifierKeyword) {
      return nextToken();
    }
    else if(current().getKind() == SyntaxKind.IntTypeKeyword) {
      SyntaxNode type = nextToken();
      if(optionalMatch(SyntaxKind.OpenBracketsToken)) {
        SyntaxNode openingToken = nextToken();
        SyntaxNode closingToken = match(SyntaxKind.CloseBracketsToken);
        type = new SyntaxNode(SyntaxKind.ArrayTypeToken, type.getLine(), type.getText()+openingToken.getText()+closingToken.getText(), null);
      }
      return type;
    }
    return null;
  }

  ArrayList<StatementSyntax> ParseStatementList() {
    SyntaxKind current = current().getKind();
    ArrayList<StatementSyntax> statementList = new ArrayList<>();
    while(current == SyntaxKind.OpenScopeToken || current == SyntaxKind.WhileKeyword || current == SyntaxKind.IfKeyword ||
          current == SyntaxKind.PrintKeyword || current == SyntaxKind.IdentifierKeyword) {
      statementList.add(ParseStatement());
      current = current().getKind();
    }
    if(statementList.size() == 0) statementList = null;
    return statementList;
  }

  private StatementSyntax ParseStatement(){
    if(current().getKind() == SyntaxKind.OpenScopeToken){
      SyntaxNode left = nextToken();
      ArrayList<StatementSyntax> statementList = ParseStatementList();
      SyntaxNode right = match(SyntaxKind.CloseScopeToken);
      return new ScopeStatementSyntax(left, statementList, right);
    }
    else if(current().getKind() == SyntaxKind.WhileKeyword){
      SyntaxNode loopKeyword = nextToken();
      match(SyntaxKind.OpenParenthesisToken);
      ExpressionSyntax expression = ParseExpression();
      match(SyntaxKind.CloseParenthesisToken);
      StatementSyntax statement = ParseStatement();
      return new LoopStatementSyntax(loopKeyword, expression, statement);
    }
    else if(current().getKind() == SyntaxKind.IfKeyword){
      SyntaxNode ifKeyword = nextToken();
      match(SyntaxKind.OpenParenthesisToken);
      ExpressionSyntax expression = ParseExpression();
      match(SyntaxKind.CloseParenthesisToken);
      StatementSyntax ifStatement = ParseStatement();
      SyntaxNode elseKeyword = match(SyntaxKind.ElseKeyword);
      StatementSyntax elseStatement = ParseStatement();
      return new IfElseStatementSyntax(ifKeyword, expression, ifStatement, elseKeyword, elseStatement);
    }
    else if(current().getKind() == SyntaxKind.PrintKeyword){
      SyntaxNode printKeyword = nextToken();
      match(SyntaxKind.OpenParenthesisToken);
      ExpressionSyntax expression = ParseExpression();
      match(SyntaxKind.CloseParenthesisToken);
      match(SyntaxKind.SemicolonToken);
      return new PrintStatementSyntax(printKeyword, expression);
    }
    else if(current().getKind() == SyntaxKind.IdentifierKeyword){
      SyntaxNode identifierToken = nextToken();
      if(current().getKind() == SyntaxKind.EqualsToken) {
        SyntaxNode operatorToken = nextToken();
        ExpressionSyntax right = ParseExpression();
        match(SyntaxKind.SemicolonToken);
        return new AssignmentStatementSyntax(identifierToken, null, null, null, operatorToken, right);
      }
      else if(current().getKind() == SyntaxKind.OpenBracketsToken){
        SyntaxNode openingToken = nextToken();
        ExpressionSyntax lookUpExpression = ParseExpression();
        SyntaxNode closingToken = match(SyntaxKind.CloseBracketsToken);
        SyntaxNode operatorToken = match(SyntaxKind.EqualsToken);
        ExpressionSyntax assignmentExpression = ParseExpression();
        match(SyntaxKind.SemicolonToken);
        return new AssignmentStatementSyntax(identifierToken, openingToken, lookUpExpression, closingToken, operatorToken, assignmentExpression);
      }
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, Expected Statement", current().getLine(), current().getKind()));
    return new BadStatementSyntax(current());
  }

  private ExpressionSyntax ParseExpression(){
    ExpressionSyntax primaryExpression = ParsePrimaryExpression();
    if(current().getKind() == SyntaxKind.OpenBracketsToken){
      SyntaxNode openingToken = nextToken();
      ExpressionSyntax lookUpExpression = ParseExpression();
      SyntaxNode closingToken = match(SyntaxKind.CloseBracketsToken);
      return new LookUpExpressionSyntax(primaryExpression, openingToken, lookUpExpression, closingToken);
    }
    else if(current().getKind() == SyntaxKind.DotToken){
      SyntaxNode dotToken = nextToken();
      if(current().getKind() == SyntaxKind.LengthKeyword) {
        SyntaxNode lengthKeyword = nextToken();
        return new ArrayLengthExpressionSyntax(primaryExpression, dotToken, lengthKeyword);
      }
      else if(current().getKind() == SyntaxKind.IdentifierKeyword) {
        SyntaxNode methodName = nextToken();
        SyntaxNode openingParenthesis = match(SyntaxKind.OpenParenthesisToken);
        if(optionalMatch(SyntaxKind.CloseParenthesisToken)) {
          SyntaxNode closingParenthesis = nextToken();
          return new MethodCallExpressionSyntax(primaryExpression, dotToken, methodName, openingParenthesis, null, null, closingParenthesis);
        }
        else {
          ExpressionSyntax firstArgument = ParseExpression();
          ArrayList<SyntaxEntity> expressionList = ParseExpressionList();
          SyntaxNode closingParenthesis = match(SyntaxKind.CloseParenthesisToken);
          return new MethodCallExpressionSyntax(primaryExpression, dotToken, methodName, openingParenthesis, firstArgument, expressionList, closingParenthesis);
        }
      }
    }
    else if(current().getKind() == SyntaxKind.StarToken || current().getKind() == SyntaxKind.PlusToken || current().getKind() == SyntaxKind.MinusToken ||
            current().getKind() == SyntaxKind.CompareToken || current().getKind() == SyntaxKind.AndToken) {
      return ParseBinaryExpression(0, primaryExpression);
    }
    return primaryExpression;
    //return ParseBinaryExpression(0); @TODO Verificar como orgnaizar precedencia de operadores matematicos
  }

  private ArrayList<SyntaxEntity> ParseExpressionList(){
    ArrayList<SyntaxEntity> expressionList = new ArrayList<>();
    while(current().getKind() == SyntaxKind.CommaToken) {
      SyntaxNode commaToken = nextToken();
      ExpressionSyntax nextExpression = ParseExpression();
      expressionList.add(commaToken);
      expressionList.add(nextExpression);
    }
    if(expressionList.size() == 0) expressionList = null;
    return expressionList;
  }

  private ExpressionSyntax ParseBinaryExpression(int parentPrecedence, ExpressionSyntax left){ // @TODO Olha este método aqui(esquecido)
    if(left == null) {
      int unaryPrecedence = SyntaxFacts.getUnaryOperatorPrecedence(current().getKind());
      if (unaryPrecedence != 0 && unaryPrecedence > parentPrecedence){
        SyntaxNode operatorToken = nextToken();
        ExpressionSyntax operand = ParseBinaryExpression(unaryPrecedence, null);
        left = new UnaryExpressionSyntax(operatorToken, operand);
      }
      else{
        left = ParsePrimaryExpression();
      }
    }
    while (true){
      int precedence = SyntaxFacts.getBinaryOperatorPrecedence(current().getKind());
      if(precedence == 0 || precedence <= parentPrecedence){
        break;
      }
      SyntaxNode operatorToken = nextToken();
      ExpressionSyntax right = ParseBinaryExpression(precedence, null);
      left = new BinaryExpressionSyntax(left, operatorToken, right);
    }

    return left;
  }

  private ExpressionSyntax ParsePrimaryExpression() {
    if(current().getKind() == SyntaxKind.OpenParenthesisToken) {
      SyntaxNode left = nextToken();
      ExpressionSyntax expression = ParseExpression();
      SyntaxNode right = match(SyntaxKind.CloseParenthesisToken);
      return new ParenthesisExpressionSyntax(left, expression, right);
    }
    else if (current().getKind() == SyntaxKind.NegationToken) {
      SyntaxNode operatorToken = nextToken();
      ExpressionSyntax operand = ParseExpression();
      return new UnaryExpressionSyntax(operatorToken, operand);
    }
    else if(current().getKind() == SyntaxKind.FalseKeyword || current().getKind() == SyntaxKind.TrueKeyword) {
      SyntaxNode booleanKeyword = nextToken();
      boolean value = current().getKind() == SyntaxKind.TrueKeyword;
      return new LiteralExpressionSyntax(booleanKeyword, value);
    }
    else if(current().getKind() == SyntaxKind.IdentifierKeyword) {
      SyntaxNode identifierToken = nextToken();
      return new NameExpressionSyntax(identifierToken);
    }
    else if(current().getKind() == SyntaxKind.NumberToken) {
      SyntaxNode numberToken = nextToken();
      return new LiteralExpressionSyntax(numberToken);
    }
    else if(current().getKind() == SyntaxKind.ThisKeyword) {
      SyntaxNode thisToken = nextToken();
      return new LiteralExpressionSyntax(thisToken);
    }
    else if(current().getKind() == SyntaxKind.AllocationKeyword) {
      SyntaxNode allocationToken = nextToken();
      if(current().getKind() == SyntaxKind.IntTypeKeyword) {
        SyntaxNode typeToken = nextToken();
        SyntaxNode openBrackets = match(SyntaxKind.OpenBracketsToken);
        ExpressionSyntax initializationExpression = ParseExpression();
        SyntaxNode closeBrackets = match(SyntaxKind.CloseBracketsToken);
        return new AllocationExpressionSyntax(allocationToken, typeToken, openBrackets, initializationExpression, closeBrackets);
      }
      else if(current().getKind() == SyntaxKind.IdentifierKeyword) {
        SyntaxNode typeToken = nextToken();
        SyntaxNode openParenthesis = match(SyntaxKind.OpenParenthesisToken);
        SyntaxNode closeParenthesis = match(SyntaxKind.CloseParenthesisToken);
        return new AllocationExpressionSyntax(allocationToken, typeToken, openParenthesis, null, closeParenthesis);
      }
    }
    nextToken();
    _diagnostics.add(String.format("At line %s - Unexpected token <%s>, Expected a Primary Expression", current().getLine(), current().getKind()));
    return new BadExpressionSyntax(current());
  }
}