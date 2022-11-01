import Binder.Binder;
import Binder.BoundExpression;
import Syntax.*;

import java.io.Console;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

class Main {
  public static void main(String[] args) throws Exception {

    HashMap<VariableSymbol, Object> variables = new HashMap<>();
    File sourceFile = new File("source_test.minijava");
    Scanner sourceReader = new Scanner(sourceFile);
    int lineCounter = 1;

    while(sourceReader.hasNextLine()){
      String line = sourceReader.nextLine(); /*a = -1 * 2 <  3 && 42 < 15 + 30*/

      SyntaxTree syntaxTree = SyntaxTree.Parse(line);
      //Binder binder = new Binder(variables, syntaxTree);

      //syntaxTree.getDiagnostics().addAll(binder.getDiagnostics());

      SyntaxTreePrint(syntaxTree);

      if(!syntaxTree.getDiagnostics().isEmpty()){
        for(String diagnostic : syntaxTree.getDiagnostics()){
          System.out.printf("At line %s: %s%n", lineCounter, diagnostic);
        }
      }
      lineCounter++;
    }
  }

  public static void SyntaxTreePrint(SyntaxTree tree){
    ExpressionSyntax root = tree.getRoot();
    String indent = "";
    SyntaxTreePrint(root, indent, true);
  }

  public static void SyntaxTreePrint(SyntaxNode node, String indent, boolean isLast){
    String marker = isLast ? "└──" : "├──";

    System.out.print(indent);
    System.out.print(marker);
    System.out.print(node.getKind());

    if (node instanceof SyntaxToken && ((SyntaxToken) node).getValue() != null){
      System.out.print(" ");
      System.out.print(((SyntaxToken) node).getValue());
    }
    else if (node instanceof SyntaxToken && node.getKind() == SyntaxKind.IdentifierKeyword){
      System.out.print(" ");
      System.out.print(((SyntaxToken) node).getText());
    }

    System.out.println();

    indent += isLast ? "    " : "│   ";

    isLast = node.getChildren().size() == 0;

    for(SyntaxNode child : node.getChildren()) SyntaxTreePrint(child, indent, isLast);
  }
}