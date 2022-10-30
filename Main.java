import Binder.Binder;
import Binder.BoundExpression;
import Syntax.ExpressionSyntax;
import Syntax.SyntaxNode;
import Syntax.SyntaxToken;
import Syntax.SyntaxTree;

import java.io.Console;
import java.util.ArrayList;

class Main {
  public static void main(String[] args) throws Exception {

    while(true){
      Console csnl = System.console();
      String line;
      if(csnl != null) line = csnl.readLine();
      else line = "-1 * 2 <  3 && 42 < 15 + 30"; /**/
      if(line == null || StringManipulation.IsNullOrWhitespace(line)) return;

      SyntaxTree syntaxTree = SyntaxTree.Parse(line);
      Binder binder = new Binder();
      BoundExpression boundExpression = binder.BindExpression(syntaxTree.getRoot());

      syntaxTree.getDiagnostics().addAll(binder.getDiagnostics());

      SyntaxTreePrint(syntaxTree);

      if(!syntaxTree.getDiagnostics().isEmpty()){
        for(String diagnostic : syntaxTree.getDiagnostics()){
          System.out.println(diagnostic);
        }
      }
      break;
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

    System.out.println();

    indent += isLast ? "    " : "│   ";

    isLast = node.getChildren().size() == 0;

    for(SyntaxNode child : node.getChildren()) SyntaxTreePrint(child, indent, isLast);
  }
}