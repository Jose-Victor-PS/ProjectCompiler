package Syntax;

public class SyntaxFacts { //@TODO nao eh usado mais
    public static int getUnaryOperatorPrecedence(SyntaxKind kind){
        switch (kind){
            case MinusToken:
            case NegationToken:
                return 5;

            default:
                return 0;
        }
    }

    public static int getBinaryOperatorPrecedence(SyntaxKind kind){
        switch (kind){
            case StarToken:
                return 4;

            case PlusToken:
            case MinusToken:
                return 3;

            case CompareToken:
                return 2;

            case AndToken:
                return 1;

            default:
                return 0;
        }
    }
}
