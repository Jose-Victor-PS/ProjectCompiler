package Syntax;

import Syntax.Declaration.DeclarationSyntax;
import Syntax.Declaration.MainClassDeclarationSyntax;

import java.util.ArrayList;
import java.util.Arrays;

public class ProgramSyntax extends SyntaxEntity{
    private DeclarationSyntax _mainClass;
    private ArrayList<DeclarationSyntax> _classList;
    private SyntaxNode _endOfFile;

    public ProgramSyntax(DeclarationSyntax mainClass, ArrayList<DeclarationSyntax> classList, SyntaxNode endOfFile) {
        _mainClass = mainClass;
        _classList = classList;
        _endOfFile = endOfFile;
    }

    public DeclarationSyntax getMainClass() { return _mainClass; }
    public ArrayList<DeclarationSyntax> getClassList() { return _classList; }
    public SyntaxNode getEndOfFile() { return _endOfFile; }

    @Override
    public SyntaxKind getKind() {
        return SyntaxKind.Program;
    }

    @Override
    public ArrayList<SyntaxEntity> getChildren() {
        ArrayList<SyntaxEntity> children  = new ArrayList<SyntaxEntity>();
        children.add(_mainClass);
        if(_classList != null)children.addAll(_classList);
        children.add(_endOfFile);
        return children;
    }
}
