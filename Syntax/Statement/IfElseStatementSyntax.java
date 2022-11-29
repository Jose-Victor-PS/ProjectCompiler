package Syntax.Statement;

import Syntax.Expression.ExpressionSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class IfElseStatementSyntax extends StatementSyntax {
    private SyntaxNode _ifKeyword;
    private ExpressionSyntax _expression;
    private StatementSyntax _ifStatement;
    private SyntaxNode _elseKeyword;
    private StatementSyntax _elseStatement;
    public IfElseStatementSyntax(SyntaxNode ifKeyword, ExpressionSyntax expression, StatementSyntax ifStatement, SyntaxNode elseKeyword, StatementSyntax elseStatement) {
        _ifKeyword = ifKeyword;
        _expression = expression;
        _ifStatement = ifStatement;
        _elseKeyword = elseKeyword;
        _elseStatement = elseStatement;
    }
    public SyntaxNode getIfKeyword(){
        return _ifKeyword;
    }
    public ExpressionSyntax getExpression(){
        return _expression;
    }
    public StatementSyntax getIfStatement(){
        return _ifStatement;
    }
    public SyntaxNode getElseKeyword() { return _elseKeyword; }
    public StatementSyntax getElseStatement(){ return _elseStatement; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.IfElseStatement;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_ifKeyword, _expression, _ifStatement, _elseKeyword, _elseStatement));
    }
}
