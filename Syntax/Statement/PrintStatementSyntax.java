package Syntax.Statement;

import Syntax.Expression.ExpressionSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class PrintStatementSyntax extends StatementSyntax {
    private SyntaxNode _printKeyword;
    private ExpressionSyntax _expression;
    public PrintStatementSyntax(SyntaxNode printKeyword, ExpressionSyntax expression) {
        _printKeyword = printKeyword;
        _expression = expression;
    }

    public SyntaxNode getPrintKeyword(){
        return _printKeyword;
    }
    public ExpressionSyntax getExpression(){
        return _expression;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.PrintStatement;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_printKeyword, _expression));
    }
}
