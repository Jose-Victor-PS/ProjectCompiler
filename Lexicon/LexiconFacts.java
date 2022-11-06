package Lexicon;

public class LexiconFacts {
    public static TokenKind getKeywordKind(String text) {
        switch (text){
            case "true":
                return TokenKind.TrueKeyword;
            case "false":
                return TokenKind.FalseKeyword;
            case "int":
                return TokenKind.IntTypeKeywork;
            case "boolean":
                return TokenKind.BooleanTypeKeyword;
            case "new":
                return TokenKind.AllocationKeyword;
            case "this":
                return TokenKind.ThisKeyword;
            case "length":
                return TokenKind.LengthKeyword;
            default:
                return TokenKind.IdentifierKeyword;
        }
    }
}
