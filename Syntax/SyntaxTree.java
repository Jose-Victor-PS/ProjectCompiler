package Syntax;

import java.util.List;
import CompilerComponents.Parser;

public class SyntaxTree {
    private List<String> _diagnostics;
    private ExpressionSyntax _root;
    private SyntaxToken _lastToken;

    public SyntaxTree(List<String> diagnostics, ExpressionSyntax root, SyntaxToken lastToken){
        _diagnostics = diagnostics;
        _root = root;
        _lastToken = lastToken;
    }

    public List<String> getDiagnostics(){
        return _diagnostics;
    }

    public ExpressionSyntax getRoot(){
        return _root;
    }

    public SyntaxToken getLastToken(){
        return _lastToken;
    }

    public static SyntaxTree Parse(String text){
        Parser parser = new Parser(text);
        return parser.Parse();
    }
}
