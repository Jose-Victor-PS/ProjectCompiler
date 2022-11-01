package Syntax;

import java.util.ArrayList;

public class CompilationUnitSyntax extends SyntaxNode{

    private ExpressionSyntax _expression;
    private SyntaxToken _endOfFileToken;

    public CompilationUnitSyntax(ExpressionSyntax expression, SyntaxToken endOfFileToken){
        _expression = expression;
        _endOfFileToken = endOfFileToken;
    }

    public ExpressionSyntax getExpression(){
        return _expression;
    }

    public SyntaxToken getEndOfFileToken(){
        return _endOfFileToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.CompilationUnit;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren() {
        return null;
    }
}
