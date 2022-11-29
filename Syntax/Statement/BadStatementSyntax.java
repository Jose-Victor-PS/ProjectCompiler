package Syntax.Statement;

import Syntax.SyntaxEntity;
import Syntax.SyntaxKind;
import Syntax.SyntaxNode;

import java.util.ArrayList;

public class BadStatementSyntax extends StatementSyntax{
    private SyntaxNode _token;

    public BadStatementSyntax(SyntaxNode token){
        _token = token;
    }
    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.BadToken;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        return new ArrayList<SyntaxEntity>();
    }
}
