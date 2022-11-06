import Lexicon.Lexer;
import Lexicon.LexiconToken;
import java.io.File;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.Scanner;

class Main {
  public static void main(String[] args) throws Exception {

    File sourceFile = new File("source_test.minijava");
    byte[] fileInBytes = Files.readAllBytes(sourceFile.toPath());
    String fileContent = new String (fileInBytes);
    Lexer lexer = new Lexer(fileContent);
    ArrayList<LexiconToken> tokens = lexer.ScanSourceCode();

    printTokens(tokens);

    if(!lexer.getDiagnostics().isEmpty()){
      for(String diagnostic : lexer.getDiagnostics()){
        System.out.printf("%s", diagnostic);
      }
    }

  }

  private static void printTokens(ArrayList<LexiconToken> tokens) {
    int lines = 1;
    for(LexiconToken token : tokens) {
      System.out.printf("%s : %s", token.getText(), token.getKind());
      System.out.print("  ");
      if(token.getLine() > lines) {
        for(int i=0; i<token.getLine() - lines; i++) {
          System.out.println();
        }
        lines = token.getLine();
      }
    }
  }
}