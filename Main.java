import java.io.Console;

class Main {
  public static void main(String[] args) {

    while(true){
      System.out.println("> ");
      Console csnl = System.console();
      String line;
      if(csnl != null) line = csnl.readLine();
      else line = "(1 + 2 * 3";
      if(line == null || StringManipulation.IsNullOrWhitespace(line)) return;

      SyntaxTree syntaxTree = SyntaxTree.Parse(line);

      PrettyPrint(syntaxTree.getRoot());

      if(!syntaxTree.getDiagnostics().isEmpty()){
        for(String diagnostic : syntaxTree.getDiagnostics()){
          System.out.println(diagnostic);
        }
      }

//      Lexer lexer = new Lexer(line);
//      while(true){
//        SyntaxToken token = lexer.NextToken();
//        if(token.getKind() == SyntaxKind.EndOfFileToken) break;
//      }
      break;
    }

  }

  public static void PrettyPrint(SyntaxNode node){
    String indent = "";
    PrettyPrint(node, indent);
  }

  public static void PrettyPrint(SyntaxNode node, String indent){
    System.out.print(indent);
    System.out.print(node.getKind());

    if (node instanceof SyntaxToken && ((SyntaxToken) node).getValue() != null){
      System.out.print(" ");
      System.out.print(((SyntaxToken) node).getValue());
    }

    System.out.println();

    indent += "    ";

    for(SyntaxNode child : node.getChildren()) PrettyPrint(child, indent);
  }
}