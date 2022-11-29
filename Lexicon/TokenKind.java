package Lexicon;

import Syntax.SyntaxKind;

public enum TokenKind {
    EndOfFileToken(SyntaxKind.EndOfFileToken),
    NumberToken(SyntaxKind.NumberToken),
    IgnorableToken(SyntaxKind.BadToken),
    PlusToken(SyntaxKind.PlusToken),
    MinusToken(SyntaxKind.MinusToken),
    StarToken(SyntaxKind.StarToken),
    NegationToken(SyntaxKind.NegationToken),
    OpenParenthesisToken(SyntaxKind.OpenParenthesisToken),
    CloseParenthesisToken(SyntaxKind.CloseParenthesisToken),
    BadToken(SyntaxKind.BadToken),
    TrueKeyword(SyntaxKind.TrueKeyword),
    FalseKeyword(SyntaxKind.FalseKeyword),
    IdentifierKeyword(SyntaxKind.IdentifierKeyword),
    AndToken(SyntaxKind.AndToken),
    CompareToken(SyntaxKind.CompareToken),
    EqualsToken(SyntaxKind.EqualsToken),
    SemicolonToken(SyntaxKind.SemicolonToken),
    IntTypeKeyword(SyntaxKind.IntTypeKeywork),
    BooleanTypeKeyword(SyntaxKind.BooleanTypeKeyword),
    AllocationKeyword(SyntaxKind.AllocationKeyword),
    OpenBracketsToken(SyntaxKind.OpenBracketsToken),
    CloseBracketsToken(SyntaxKind.CloseBracketsToken),
    ThisKeyword(SyntaxKind.ThisKeyword),
    DotToken(SyntaxKind.DotToken),
    LengthKeyword(SyntaxKind.LengthKeyword),
    OpenScopeToken(SyntaxKind.OpenScopeToken),
    CloseScopeToken(SyntaxKind.CloseScopeToken),
    StringKeyword(SyntaxKind.StringKeyword),
    IfKeyword(SyntaxKind.IfKeyword),
    ElseKeyword(SyntaxKind.ElseKeyword),
    WhileKeyword(SyntaxKind.WhileKeyword),
    PublicKeyword(SyntaxKind.PublicKeyword),
    StaticKeyword(SyntaxKind.StaticKeyword),
    VoidKeyword(SyntaxKind.VoidKeyword),
    MainKeyword(SyntaxKind.MainKeyword),
    ExtendsKeyword(SyntaxKind.ExtendsKeyword),
    ReturnKeyword(SyntaxKind.ReturnKeyword),
    CommaToken(SyntaxKind.CommaToken),
    PrintKeyword(SyntaxKind.PrintKeyword),
    ClassKeyword(SyntaxKind.ClassKeyword);

    private final SyntaxKind _syntax;

    private TokenKind(SyntaxKind syntax) {
        _syntax = syntax;
    }

    public SyntaxKind toSyntax(){
        return _syntax;
    }
}
