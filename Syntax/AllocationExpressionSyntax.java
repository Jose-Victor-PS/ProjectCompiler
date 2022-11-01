package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class AllocationExpressionSyntax extends ExpressionSyntax{
    SyntaxToken _allocationToken;
    SyntaxToken _typeToken;
    ExpressionSyntax _initializationExpression;

    public AllocationExpressionSyntax(SyntaxToken allocationToken, SyntaxToken typeToken, ExpressionSyntax initializationExpression) {
        _allocationToken = allocationToken;
        _typeToken = typeToken;
        _initializationExpression = initializationExpression;
    }

    public SyntaxToken getAllocationToken(){
        return _allocationToken;
    }
    public SyntaxToken getTypeToken(){
        return _typeToken;
    }
    public ExpressionSyntax getInitializationExpression(){
        return _initializationExpression;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.AllocationExpression;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren() {
        return new ArrayList<SyntaxNode>(Arrays.asList(_allocationToken, _typeToken, _initializationExpression));
    }
}
