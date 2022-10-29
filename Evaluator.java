public class Evaluator {
    private ExpressionSyntax _root;

    public Evaluator(ExpressionSyntax root){
        _root = root;
    }

    public ExpressionSyntax getRoot(){
        return _root;
    }

    public int Evaluate(){
        try {
            return EvaluateExpression(_root);
        }
        catch (Exception e){
            System.out.println("Erro");
            return -1;
        }
    }

    private int EvaluateExpression(ExpressionSyntax node) throws Exception{
        if(node instanceof LiteralExpressionSyntax){
            return (int)((LiteralExpressionSyntax) node).getToken().getValue();
        }
        if(node instanceof BinaryExpressionSyntax){
            int left = EvaluateExpression(((BinaryExpressionSyntax) node).getLeft());
            int right = EvaluateExpression(((BinaryExpressionSyntax) node).getRight());

            if(((BinaryExpressionSyntax) node).getOperator().getKind() == SyntaxKind.PlusToken){
                return left + right;
            } else if (((BinaryExpressionSyntax) node).getOperator().getKind() == SyntaxKind.MinusToken) {
                return left - right;
            } else if (((BinaryExpressionSyntax) node).getOperator().getKind() == SyntaxKind.SlashToken) {
                return left / right;
            } else if (((BinaryExpressionSyntax) node).getOperator().getKind() == SyntaxKind.StarToken) {
                return left * right;
            }
            else {
                throw new Exception(String.format("Unexpected binary operator: %s", ((BinaryExpressionSyntax) node).getOperator().getKind()));
            }
        }
        throw new Exception(String.format("Unexpected node: %s", node.getKind()));
    }
}
