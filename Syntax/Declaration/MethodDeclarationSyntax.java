package Syntax.Declaration;

import Syntax.Expression.ExpressionSyntax;
import Syntax.Statement.StatementSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class MethodDeclarationSyntax extends DeclarationSyntax {
    private SyntaxNode _publicKeyword;
    private SyntaxNode _type;
    private SyntaxNode _methodName;
    private SyntaxNode _openingParenthesis;
    private DeclarationSyntax _firstParameter;
    private ArrayList<SyntaxEntity> _parameterList;
    private SyntaxNode _closingParenthesis;
    private SyntaxNode _openScope;
    private ArrayList<DeclarationSyntax> _variableDeclarationList;
    private ArrayList<StatementSyntax> _statementList;
    private SyntaxNode _returnKeyword;
    private ExpressionSyntax _expression;
    private SyntaxNode _closeScope;

    public MethodDeclarationSyntax(SyntaxNode publicKeyword, SyntaxNode type, SyntaxNode methodName, SyntaxNode openingParenthesis,
                                   DeclarationSyntax firstParameter, ArrayList<SyntaxEntity> parameterList, SyntaxNode closingParenthesis,
                                   SyntaxNode openScope, ArrayList<DeclarationSyntax> variableDeclarationList, ArrayList<StatementSyntax> statementList,
                                   SyntaxNode returnKeyword, ExpressionSyntax expression, SyntaxNode closeScope) {
        _publicKeyword = publicKeyword;
        _type = type;
        _methodName = methodName;
        _openingParenthesis = openingParenthesis;
        _firstParameter = firstParameter;
        _parameterList = parameterList;
        _closingParenthesis = closingParenthesis;
        _openScope = openScope;
        _variableDeclarationList = variableDeclarationList;
        _statementList = statementList;
        _returnKeyword = returnKeyword;
        _expression = expression;
        _closeScope = closeScope;
    }

    public SyntaxNode getPublicKeyword() { return _publicKeyword; }
    public SyntaxNode getType() { return _type; }
    public SyntaxNode getMethodName() { return _methodName; }
    public SyntaxNode getOpeningParenthesis() { return _openingParenthesis; }
    public DeclarationSyntax getFirstParameter() { return _firstParameter; }
    public ArrayList<SyntaxEntity> getParameterList() { return _parameterList; }
    public SyntaxNode getClosingParenthesis() { return _closingParenthesis; }
    public SyntaxNode getOpenScope() { return _openScope; }
    public ArrayList<DeclarationSyntax> getVariableDeclarationList() { return _variableDeclarationList; }
    public ArrayList<StatementSyntax> getStatementList() { return _statementList; }
    public SyntaxNode getReturnKeyword() { return _returnKeyword; }
    public ExpressionSyntax getExpression() { return _expression; }
    public SyntaxNode getCloseScope() { return _closeScope; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.MethodDeclaration;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        ArrayList<SyntaxEntity> children = new ArrayList<SyntaxEntity>(Arrays.asList(_publicKeyword, _type, _methodName, _openingParenthesis, _firstParameter));
        if(_parameterList != null )children.addAll(_parameterList);
        children.addAll(Arrays.asList(_closingParenthesis, _openScope));
        if(_variableDeclarationList != null)children.addAll(_variableDeclarationList);
        if(_statementList != null) children.addAll(_statementList);
        children.addAll(Arrays.asList(_returnKeyword, _expression, _closeScope));
        return children;
    }
}
