package Syntax;

import java.util.ArrayList;
import java.util.Arrays;

public class DeclarationExpressionSyntax extends ExpressionSyntax{
    private SyntaxToken _typeToken;
    private SyntaxToken _identifierToken;
    private SyntaxToken _semicolonToken;
    public DeclarationExpressionSyntax(SyntaxToken typeToken, SyntaxToken identifierToken, SyntaxToken semicolonToken) {
        _typeToken = typeToken;
        _identifierToken = identifierToken;
        _semicolonToken = semicolonToken;
    }

    public SyntaxToken getTypeToken(){
        return _typeToken;
    }

    public SyntaxToken getIdentifierToken(){
        return _identifierToken;
    }

    public SyntaxToken getSemicolonTOken(){
        return _semicolonToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.DeclarationExpression;
    }

    @Override
    public ArrayList<SyntaxNode> getChildren() {
        return new ArrayList<SyntaxNode>(Arrays.asList(_typeToken, _identifierToken, _semicolonToken));
    }
}
