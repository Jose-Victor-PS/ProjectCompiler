package Syntax;

import Syntax.Declaration.DeclarationSyntax;
import Syntax.Statement.StatementSyntax;

import java.util.List;

public class SyntaxTree {
    private List<String> _diagnostics;
    private ProgramSyntax _root;

    public SyntaxTree(List<String> diagnostics, ProgramSyntax root){
        _diagnostics = diagnostics;
        _root = root;
    }

    public List<String> getDiagnostics(){
        return _diagnostics;
    }

    public ProgramSyntax getRoot(){
        return _root;
    }
}