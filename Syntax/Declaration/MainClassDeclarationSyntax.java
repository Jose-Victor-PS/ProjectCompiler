package Syntax.Declaration;

import Syntax.Statement.StatementSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class MainClassDeclarationSyntax extends DeclarationSyntax {
    private SyntaxNode _classKeyword;
    private SyntaxNode _className;
    private SyntaxNode _openScope;
    private SyntaxNode _publicKeyword;
    private SyntaxNode _staticKeyword;
    private SyntaxNode _voidKeyword;
    private SyntaxNode _mainKeyword;
    private SyntaxNode _openParenthesis;
    private SyntaxNode _stringKeyword;
    private SyntaxNode _openBrackets;
    private SyntaxNode _closeBrackets;
    private SyntaxNode _cmdArgsName;
    private SyntaxNode _closeParenthesis;
    private SyntaxNode _openInnerScope;
    private ArrayList<DeclarationSyntax> _variableDeclarationList;
    private ArrayList<StatementSyntax> _statementList;
    private SyntaxNode _closeInnerScope;
    private SyntaxNode _closeScope;

    public MainClassDeclarationSyntax(SyntaxNode classKeyword, SyntaxNode className, SyntaxNode openScope, SyntaxNode publicKeyword,
                                      SyntaxNode staticKeyword, SyntaxNode voidKeyword, SyntaxNode mainKeyword, SyntaxNode openParenthesis,
                                      SyntaxNode stringKeyword, SyntaxNode openBrackets, SyntaxNode closeBrackets, SyntaxNode cmdArgsName,
                                      SyntaxNode closeParenthesis, SyntaxNode openInnerScope, ArrayList<DeclarationSyntax> variableDeclarationList,
                                      ArrayList<StatementSyntax> statementList, SyntaxNode closeInnerScope, SyntaxNode closeScope) {
        _classKeyword = classKeyword;
        _className = className;
        _openScope = openScope;
        _publicKeyword = publicKeyword;
        _staticKeyword = staticKeyword;
        _voidKeyword = voidKeyword;
        _mainKeyword = mainKeyword;
        _openParenthesis = openParenthesis;
        _stringKeyword = stringKeyword;
        _openBrackets = openBrackets;
        _closeBrackets = closeBrackets;
        _cmdArgsName = cmdArgsName;
        _closeParenthesis = closeParenthesis;
        _openInnerScope = openInnerScope;
        _variableDeclarationList = variableDeclarationList;
        _statementList = statementList;
        _closeInnerScope = closeInnerScope;
        _closeScope = closeScope;
    }

    public SyntaxNode getClassKeyword() { return _classKeyword; }
    public SyntaxNode getClassName() { return _className; }
    public SyntaxNode getOpenScope() { return _openScope; }
    public SyntaxNode getPublicKeyword() { return _publicKeyword; }
    public SyntaxNode getStaticKeyword() { return _staticKeyword; }
    public SyntaxNode getVoidKeyword() { return _voidKeyword; }
    public SyntaxNode getMainKeyword() { return _mainKeyword; }
    public SyntaxNode getOpenParenthesis() { return _openParenthesis; }
    public SyntaxNode getStringKeyword() { return _stringKeyword; }
    public SyntaxNode getOpenBrackets() { return _openBrackets; }
    public SyntaxNode getCloseBrackets() { return _closeBrackets; }
    public SyntaxNode getCmdArgsName() { return _cmdArgsName; }
    public SyntaxNode getCloseParenthesis() { return _closeParenthesis; }
    public SyntaxNode getOpenInnerScope() { return _openInnerScope; }
    public ArrayList<DeclarationSyntax> getVariableDeclarationList() { return _variableDeclarationList; }
    public ArrayList<StatementSyntax> getStatementList() { return _statementList; }
    public SyntaxNode getCloseInnerScope() { return _closeInnerScope; }
    public SyntaxNode getCloseScope() { return _closeScope; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.MainClassDeclaration;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        ArrayList<SyntaxEntity> children = new ArrayList<SyntaxEntity>(Arrays.asList(_classKeyword, _className, _openScope, _publicKeyword, _staticKeyword, _voidKeyword,
                                                                                     _mainKeyword, _openParenthesis, _stringKeyword, _openBrackets, _closeBrackets, _cmdArgsName,
                                                                                     _closeParenthesis, _openInnerScope));
        if(_variableDeclarationList != null )children.addAll(_variableDeclarationList);
        if(_statementList != null)children.addAll(_statementList);
        children.addAll(Arrays.asList(_closeInnerScope, _closeScope));
        return children;
    }
}
