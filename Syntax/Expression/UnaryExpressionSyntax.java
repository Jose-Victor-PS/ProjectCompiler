package Syntax.Expression;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class UnaryExpressionSyntax extends ExpressionSyntax{
    private SyntaxNode _operator;
    private ExpressionSyntax _operand;

    public UnaryExpressionSyntax(SyntaxNode operator, ExpressionSyntax operand){
        _operator = operator;
        _operand = operand;
    }

    public ExpressionSyntax getOperand(){
        return _operand;
    }

    public SyntaxNode getOperator(){
        return _operator;
    }

    @Override
    public SyntaxKind getKind(){
        return SyntaxKind.UnaryExpression;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren(){
        return new ArrayList<SyntaxEntity>(Arrays.asList(_operator, _operand));
    }
}
