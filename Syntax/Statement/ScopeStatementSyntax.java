package Syntax.Statement;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;

public class ScopeStatementSyntax extends StatementSyntax {
    private SyntaxNode _openingToken;
    private ArrayList<StatementSyntax> _statementList;
    private SyntaxNode _closingToken;

    public ScopeStatementSyntax(SyntaxNode openingToken, ArrayList<StatementSyntax> statementList, SyntaxNode closingToken){
        _openingToken = openingToken;
        _statementList = statementList;
        _closingToken = closingToken;
    }

    public SyntaxNode getOpeningToken(){
        return _openingToken;
    }
    public SyntaxNode getClosingToken(){
        return _closingToken;
    }
    public ArrayList<StatementSyntax> getStatementList(){
        return _statementList;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.ScopeStatement;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        ArrayList<SyntaxEntity> children = new ArrayList<SyntaxEntity>();
        children.add(_openingToken);
        if(_statementList != null) children.addAll(_statementList);
        children.add(_closingToken);
        return children;
    }
}
