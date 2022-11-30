package Lexicon;

public class LexiconFacts {
    public static TokenKind getKeywordKind(String text) {
        switch (text){
            case "true":
                return TokenKind.TrueKeyword;
            case "false":
                return TokenKind.FalseKeyword;
            case "int":
                return TokenKind.IntTypeKeyword;
            case "boolean":
                return TokenKind.BooleanTypeKeyword;
            case "new":
                return TokenKind.AllocationKeyword;
            case "this":
                return TokenKind.ThisKeyword;
            case "length":
                return TokenKind.LengthKeyword;
            case "String":
                return TokenKind.StringKeyword;
            case "if":
                return TokenKind.IfKeyword;
            case "else":
                return TokenKind.ElseKeyword;
            case "while":
                return TokenKind.WhileKeyword;
            case "public":
                return TokenKind.PublicKeyword;
            case "static":
                return TokenKind.StaticKeyword;
            case "void":
                return TokenKind.VoidKeyword;
            case "main":
                return TokenKind.MainKeyword;
            case "extends":
                return TokenKind.ExtendsKeyword;
            case "class":
                return TokenKind.ClassKeyword;
            case "return":
                return TokenKind.ReturnKeyword;
            default:
                return TokenKind.IdentifierKeyword;
        }
    }
}
