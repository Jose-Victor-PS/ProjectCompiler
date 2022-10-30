package Binder;

import Syntax.*;

import java.lang.reflect.Type;
import java.util.ArrayList;

public class Binder {
    private ArrayList<String> _diagnostics = new ArrayList<>();

    public BoundExpression BindExpression(ExpressionSyntax syntax) throws Exception{
        switch (syntax.getKind()) {
            case LiteralExpression:
                return BindLiteralExpression((LiteralExpressionSyntax) syntax);
            case UnaryExpression:
                return BindUnaryExpression((UnaryExpressionSyntax) syntax);
            case BinaryExpression:
                return BindBinaryExpression((BinaryExpressionSyntax) syntax);
            default:
                throw new Exception(String.format("Unexpected syntax %s", syntax.getKind()));
        }
    }

    public ArrayList<String> getDiagnostics(){
        return _diagnostics;
    }

    private BoundExpression BindBinaryExpression(BinaryExpressionSyntax syntax) throws Exception{
        BoundExpression boundLeft = BindExpression(syntax.getLeft());
        BoundExpression boundRight = BindExpression(syntax.getRight());
        BoundBinaryOperator boundOperator = BoundBinaryOperator.Bind(syntax.getOperator().getKind(), boundLeft.getType(), boundRight.getType());

        if(boundOperator == null){
            _diagnostics.add(String.format("Binary operator %s is not defined for types %s and %s", syntax.getOperator().getText(),
                                           boundLeft.getType(), boundRight.getType()));
            return boundLeft;
        }

        return new BoundBinaryExpression(boundLeft, boundOperator, boundRight);
    }

    private BoundBinaryOperatorKind BindBinaryOperatorKind(SyntaxKind kind, Class<?> leftType, Class<?> rightType) throws Exception{
        if(leftType == Integer.class || rightType == Integer.class){
            switch (kind){
                case PlusToken:
                    return BoundBinaryOperatorKind.Addition;
                case MinusToken:
                    return BoundBinaryOperatorKind.Subtraction;
                case StarToken:
                    return BoundBinaryOperatorKind.Multiplication;
                case CompareToken:
                    return BoundBinaryOperatorKind.Comparison;
                default:
                    throw new Exception(String.format("Unexpected binary operator %s", kind));
            }
        }

        if(leftType == boolean.class || rightType == boolean.class){
            if(kind == SyntaxKind.AndToken)
                return BoundBinaryOperatorKind.LogicalAnd;
            else
                throw new Exception(String.format("Unexpected binary operator %s", kind));
        }

        return null;
    }

    private BoundExpression BindUnaryExpression(UnaryExpressionSyntax syntax) throws Exception{
        BoundExpression boundOperand = BindExpression(syntax.getOperand());
        BoundUnaryOperator boundOperator = BoundUnaryOperator.Bind(syntax.getOperator().getKind(), boundOperand.getType());

        if(boundOperator == null){
            _diagnostics.add(String.format("Unary operator %s is not defined for type %s", syntax.getOperator().getText(), boundOperand.getType()));
            return boundOperand;
        }

        return new BoundUnaryExpression(boundOperator, boundOperand);
    }

    private BoundUnaryOperatorKind BindUnaryOperatorKind(SyntaxKind kind, Class<?> operandType) throws Exception{
        if(operandType == Integer.class){
            switch (kind){
                case MinusToken:
                    return BoundUnaryOperatorKind.Negation;
                default:
                    throw new Exception(String.format("Unexpected unary operator %s", kind));
            }
        }

        if(operandType == boolean.class){
            if (kind == SyntaxKind.NegationToken)
                return BoundUnaryOperatorKind.LogicalNegation;
            else
                throw new Exception(String.format("Unexpected unary operator %s", kind));
        }

        return null;

    }

    private BoundExpression BindLiteralExpression(LiteralExpressionSyntax syntax) {
        int value;
        try{
            value = (int)syntax.getValue();
        } catch (Exception e){
            value = 0;
        }
        return new BoundLiteralExpression(value);
    }
}
