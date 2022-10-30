package Binder;

import Syntax.*;
import java.util.ArrayList;
import java.util.HashMap;

public class Binder {
    private ArrayList<String> _diagnostics = new ArrayList<>();
    private HashMap<VariableSymbol, Object> _variables;

    public Binder(HashMap<VariableSymbol, Object> variables){
        _variables = variables;
    }

    public ArrayList<String> getDiagnostics(){
        return _diagnostics;
    }

    public HashMap<VariableSymbol, Object> getVariables(){
        return _variables;
    }

    public BoundExpression BindExpression(ExpressionSyntax syntax) throws Exception{
        switch (syntax.getKind()) {
            case ParenthesisExpression:
                return BindParenthesisExpression((ParenthesisExpressionSyntax)syntax);
            case LiteralExpression:
                return BindLiteralExpression((LiteralExpressionSyntax) syntax);
            case NameExpression:
                return BindNameExpression((NameExpressionSyntax)syntax);
            case AssignmentExpression:
                return BindAssignmentExpression((AssignmentExpressionSyntax)syntax);
            case UnaryExpression:
                return BindUnaryExpression((UnaryExpressionSyntax) syntax);
            case BinaryExpression:
                return BindBinaryExpression((BinaryExpressionSyntax) syntax);
            default:
                throw new Exception(String.format("Unexpected syntax %s", syntax.getKind()));
        }
    }

    private BoundExpression BindParenthesisExpression(ParenthesisExpressionSyntax syntax) throws Exception{
        return BindExpression(syntax.getExpression());
    }

    private BoundExpression BindLiteralExpression(LiteralExpressionSyntax syntax) {
        boolean bool_value;
        int int_value;
        if(syntax.getToken().getKind() == SyntaxKind.NumberToken){
            try{
                int_value = (int)syntax.getValue();
            } catch (Exception e){
                int_value = 0;
            }
            new BoundLiteralExpression(int_value);
        }
        else if(syntax.getToken().getKind() == SyntaxKind.FalseKeyword) {
            bool_value = false;
            return new BoundLiteralExpression(bool_value);
        }


        else if(syntax.getToken().getKind() == SyntaxKind.TrueKeyword) {
            bool_value = true;
            return new BoundLiteralExpression(bool_value);
        }

        return new BoundLiteralExpression(0);
    }

    private BoundExpression BindNameExpression(NameExpressionSyntax syntax) {
        String name = syntax.getIdentifierToken().getText();
        VariableSymbol variable = _variables.keySet().stream().filter(
                (var) -> var.getName().equals(name)
        ).findFirst().orElse(null);
        if(variable == null){
            _diagnostics.add(String.format("Varialbe %s is undefined", name));
            return new BoundLiteralExpression(0);
        }
        Class<?> type = _variables.get(variable) == null ? Object.class : _variables.get(variable).getClass();
        return new BoundVariableExpression(variable);
    }

    private BoundExpression BindAssignmentExpression(AssignmentExpressionSyntax syntax) throws Exception{
        String name = syntax.getIdentifierToken().getText();
        BoundExpression boundExpression = BindExpression(syntax.getExpression());

        _variables.keySet().stream().filter(
                (var) -> var.getName().equals(name)
        ).findFirst().ifPresent(existingVariable -> _variables.remove(existingVariable));

        VariableSymbol variable = new VariableSymbol(name, boundExpression.getType());
        _variables.put(variable, null);

        return new BoundAssignmentExpression(variable, boundExpression);
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
}
