package Syntax.Statement;

import Syntax.Expression.ExpressionSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class LoopStatementSyntax extends StatementSyntax {
    private SyntaxNode _loopKeyword;
    private StatementSyntax _statement;
    private ExpressionSyntax _expression;

    public LoopStatementSyntax(SyntaxNode loopKeyword, ExpressionSyntax expression, StatementSyntax statement){
        _loopKeyword = loopKeyword;
        _statement = statement;
        _expression = expression;
    }

    public SyntaxNode getLoopKeyword(){
        return _loopKeyword;
    }
    public ExpressionSyntax getExpression(){
        return _expression;
    }
    public StatementSyntax getStatement(){
        return _statement;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.LoopStatement;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_loopKeyword, _expression, _statement));
    }
}
