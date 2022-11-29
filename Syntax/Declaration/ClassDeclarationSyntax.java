package Syntax.Declaration;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class ClassDeclarationSyntax extends DeclarationSyntax {
    private SyntaxNode _classKeyword;
    private SyntaxNode _className;
    private SyntaxNode _extendsKeyword;
    private SyntaxNode _superClass;
    private SyntaxNode _openScope;
    private ArrayList<DeclarationSyntax> _variableDeclarationList;
    private ArrayList<DeclarationSyntax> _methodDeclarationList;
    private SyntaxNode _closeScope;

    public ClassDeclarationSyntax(SyntaxNode classKeyword, SyntaxNode className, SyntaxNode extendsKeyword, SyntaxNode superClass,
                                  SyntaxNode openScope, ArrayList<DeclarationSyntax> variableDeclarationList,
                                  ArrayList<DeclarationSyntax> methodDeclarationList, SyntaxNode closeScope) {
        _classKeyword = classKeyword;
        _className = className;
        _extendsKeyword = extendsKeyword;
        _superClass = superClass;
        _openScope = openScope;
        _variableDeclarationList = variableDeclarationList;
        _methodDeclarationList = methodDeclarationList;
        _closeScope = closeScope;
    }

    public SyntaxNode getClassKeyword() { return _classKeyword; }
    public SyntaxNode getClassName() { return _className; }
    public SyntaxNode getExtendsKeyword() { return _extendsKeyword; }
    public SyntaxNode getSuperClass() { return _superClass; }
    public SyntaxNode getOpenScope() { return _openScope; }
    public ArrayList<DeclarationSyntax> getVariableDeclarationList() { return _variableDeclarationList; }
    public ArrayList<DeclarationSyntax> getMethodDeclarationList() { return _methodDeclarationList; }
    public SyntaxNode getCloseScope() { return _closeScope; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.ClassDeclaration;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        ArrayList<SyntaxEntity> children = new ArrayList<SyntaxEntity>(Arrays.asList(_classKeyword, _className, _extendsKeyword, _superClass, _openScope));
        if(_variableDeclarationList != null)children.addAll(_variableDeclarationList);
        if(_methodDeclarationList != null)children.addAll(_methodDeclarationList);
        children.add(_closeScope);
        return children;
    }
}
