package Syntax.Statement;

import Syntax.Expression.ExpressionSyntax;
import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;
import java.util.Arrays;

public class AssignmentStatementSyntax extends StatementSyntax{
    private SyntaxNode _identifierToken;
    private SyntaxNode _openingToken;
    private ExpressionSyntax _loopUpExpression;
    private SyntaxNode _closingToken;
    private SyntaxNode _equalsToken;
    private ExpressionSyntax _assignmentExpression;

    public AssignmentStatementSyntax(SyntaxNode identifierToken, SyntaxNode openingToken, ExpressionSyntax lookUpExpression, SyntaxNode closingToken, SyntaxNode equalsToken, ExpressionSyntax assignmentExpression){
        _identifierToken = identifierToken;
        _openingToken = openingToken;
        _loopUpExpression = lookUpExpression;
        _closingToken = closingToken;
        _equalsToken = equalsToken;
        _assignmentExpression = assignmentExpression;
    }

    public SyntaxNode getIdentifierToken(){
        return _identifierToken;
    }
    public ExpressionSyntax getAssignmentExpression(){
        return _assignmentExpression;
    }
    public SyntaxNode getOpeningToken() { return _openingToken; }
    public SyntaxNode getClosingToken() { return _closingToken; }
    public ExpressionSyntax getLookUpExpression() { return _loopUpExpression; }
    public SyntaxNode getEqualsToken(){
        return _equalsToken;
    }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.AssignmentStatement;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>(Arrays.asList(_identifierToken, _openingToken, _loopUpExpression, _closingToken, _equalsToken, _assignmentExpression));
    }
}
