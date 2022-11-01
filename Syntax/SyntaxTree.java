package Syntax;

import java.util.List;
import CompilerComponents.Parser;

public class SyntaxTree {
    private List<String> _diagnostics;
    private CompilationUnitSyntax _root;

    public SyntaxTree(String text){
        Parser parser = new Parser(text);
        CompilationUnitSyntax root = parser.ParseCompilationUnit();
        _diagnostics = parser.getDiagnostics();
        _root = root;
    }

    public List<String> getDiagnostics(){
        return _diagnostics;
    }

    public CompilationUnitSyntax getRoot(){
        return _root;
    }

    public static SyntaxTree Parse(String text){
        return new SyntaxTree(text);
    }
}
