class Main {
  public static void main(String[] args) {
    
    Lexer lexer = new Lexer(line);
    while(true){
      SyntaxToken token = lexer.NextToken();
      if(token.getKind() == SyntaxKind.EndOfFileToken) break;
    }
  }

  public static void PrettyPrint(SyntaxNode node, String indent = ""){
    Console.wr
  }
}