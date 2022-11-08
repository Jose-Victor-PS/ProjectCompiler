package Lexicon;

import jdk.nashorn.internal.parser.Token;

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
            case "return":
                return TokenKind.ReturnKeyword;
            case "System.out.println":
                return TokenKind.PrintKeyword;
            default:
                if(!text.contains(".")) return TokenKind.IdentifierKeyword;
                return TokenKind.BadToken;
        }
    }
}
