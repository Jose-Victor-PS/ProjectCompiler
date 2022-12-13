import Lexicon.Lexer;
import Lexicon.LexiconToken;
import Syntax.*;

import java.io.File;
import java.nio.file.Files;
import java.util.ArrayList;

class Main {
  public static void main(String[] args) throws Exception {

    File sourceFile = new File("right_code.minijava");
    byte[] fileInBytes = Files.readAllBytes(sourceFile.toPath());
    String fileContent = new String (fileInBytes);
    Lexer lexer = new Lexer(fileContent);
    ArrayList<LexiconToken> tokens = lexer.ScanSourceCode();

    System.out.println("LEXER:");

    printTokens(tokens);

    if(!lexer.getDiagnostics().isEmpty()){
      System.out.println();
      for(String diagnostic : lexer.getDiagnostics()){
        System.out.printf("%s\n", diagnostic);
      }
      return;
    }

    System.out.println("\n\nPARSER:");

    Parser parser = new Parser(tokens);
    SyntaxTree syntaxTree = parser.Parse();

    SyntaxTreePrint(syntaxTree);

    if(!syntaxTree.getDiagnostics().isEmpty()){
      for(String diagnostic : syntaxTree.getDiagnostics()){
        System.out.printf("%s\n", diagnostic);
      }
    }
  }

  private static void printTokens(ArrayList<LexiconToken> tokens) {
    int lines = 1;
    for(LexiconToken token : tokens) {
      if(token.getLine() > lines) {
        for(int i=0; i<token.getLine() - lines; i++) {
          System.out.println();
        }
        lines = token.getLine();
      }
      System.out.printf("%s : %s", token.getText(), token.getKind());
      System.out.print("  ");
    }
  }

  public static void SyntaxTreePrint(SyntaxTree tree){
    ProgramSyntax root = tree.getRoot();
    String indent = "";
    SyntaxTreePrint(root, indent, true);
  }

  public static void SyntaxTreePrint(SyntaxEntity node, String indent, boolean isLast){
    if(node == null) return;
    String marker = isLast ? "└──" : "├──";

    System.out.print(indent);
    System.out.print(marker);
    System.out.print(node.getKind());

    if (node instanceof SyntaxNode && ((SyntaxNode) node).getValue() != null){
      System.out.print(" ");
      System.out.print(((SyntaxNode) node).getValue());
    }
    else if (node instanceof SyntaxNode && node.getKind() == SyntaxKind.IdentifierKeyword){
      System.out.print(" ");
      System.out.print(((SyntaxNode) node).getText());
    }

    System.out.println();

    indent += isLast ? "    " : "│   ";

    isLast = node.getChildren().size() == 0;

    for(SyntaxEntity child : node.getChildren()) SyntaxTreePrint(child, indent, isLast);
  }
}