package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class UnaryExpressionSyntax extends ExpressionSyntax{
    private SyntaxToken _operator;
    private ExpressionSyntax _operand;

    public UnaryExpressionSyntax(SyntaxToken operator, ExpressionSyntax operand){
        _operator = operator;
        _operand = operand;
    }

    public ExpressionSyntax getOperand(){
        return _operand;
    }

    public SyntaxToken getOperator(){
        return _operator;
    }

    @Override
    public SyntaxKind getKind(){
        return SyntaxKind.UnaryExpression;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren(){
        return new ArrayList<SyntaxNode>(Arrays.asList(_operator, _operand));
    }
}
