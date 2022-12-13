%{
#include <stdio.h>
#include <string.h>
#define YYSTYPE char *
%}

%{
int yylex(void);
int yyerror(char *msg);
%}

%token IDENTIFIER NUMBER EOL
%token TRUE FALSE THIS ALLOCATION OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_BRACKETS CLOSE_BRACKETS OPEN_SCOPE CLOSE_SCOPE DOT
%token SEMICOLON COMMA EQUALS INT_TYPE BOOLEAN STRING LENGTH IF ELSE WHILE PRINT PUBLIC CLASS STATIC VOID MAIN EXTENDS RETURN
%left PLUS MINUS COMPARE
%left STAR AND
%right NEGATION

%%

goal: main_class type_declarations EOL  { return 0; }

main_class: CLASS identifier OPEN_SCOPE PUBLIC STATIC VOID MAIN OPEN_PARENTHESIS STRING OPEN_BRACKETS CLOSE_BRACKETS 
            identifier CLOSE_PARENTHESIS OPEN_SCOPE var_declarations statements CLOSE_SCOPE CLOSE_SCOPE 
            {printf("MainClass: %s Identifier %s %s %s %s %s %s %s %s %s Identifier %s %s VarDeclarations Statements %s %s\n", 
            $1, $3, $4, $5, $6, $7, $8, $9, $10, $11, $13, $14, $17, $18) ;} ;

type_declarations: type_declaration type_declarations {printf("TypeDeclarations: TypeDeclaration TypeDeclarations\n") ;}
                   | ;

type_declaration: class_declaration {printf("TypeDeclaration: ClassDeclaration\n") ;}
                  | class_extends_declaration {printf("TypeDeclaration: ClassExtendsDeclaration\n") ;} ;

class_declaration: CLASS identifier OPEN_SCOPE var_declarations method_declarations CLOSE_SCOPE 
                   {printf("ClassDeclaration: %s Identifier %s VarDeclarations MethodDeclarations %s\n", $1, $3, $6) ;} ;

class_extends_declaration: CLASS identifier EXTENDS identifier OPEN_SCOPE var_declarations method_declarations CLOSE_SCOPE 
                           {printf("ClassExtendsDeclaration: %s Identifier %s Identifier %s VarDeclarations MethodDeclarations %s\n", $1, $3, $5, $8) ;} ;

var_declarations: var_declaration var_declarations {printf("VarDeclarations: VarDeclaration VarDeclarations\n") ;}
                  | ;

var_declaration: type identifier SEMICOLON {printf("VarDeclaration: Type Identifier %s\n", $3) ;} ;

method_declarations: method_declaration method_declarations {printf("MethodDeclarations: MethodDeclaration MethodDeclarations\n") ;}
                     | ;

method_declaration: PUBLIC type identifier OPEN_PARENTHESIS CLOSE_PARENTHESIS OPEN_SCOPE var_declarations 
                    statements RETURN expression SEMICOLON CLOSE_SCOPE 
                    {printf("MethodDeclaration: %s Type Identifier %s %s %s VarDeclarations Statements %s Expression %s %s\n",
                    $1, $4, $5, $6, $9, $11, $12) ;}
                    | PUBLIC type identifier OPEN_PARENTHESIS fromal_parameter_list CLOSE_PARENTHESIS OPEN_SCOPE 
                    var_declarations statements RETURN expression SEMICOLON CLOSE_SCOPE 
                    {printf("MethodDeclaration: %s Type Identifier %s FormalParameterList %s %s VarDeclarations Statements %s Expression %s %s\n", $1, $4, $6, $7, $10, $12, $13) ;} ;

fromal_parameter_list: fromal_parameter fromal_parameter_rests {printf("FormalParameterList: FormalParameter FormalParameterRests\n") ;} ;

fromal_parameter_rests: fromal_parameter_rest fromal_parameter_rests {printf("FormalParameterRests: FormalParameterRest FormalParameterRests\n") ;}
                        | ;

fromal_parameter_rest: COMMA fromal_parameter {printf("FormalParameterRest: %s FormalParameter\n", $1) ;} ;

fromal_parameter: type identifier {printf("FormalParameter: Type Identifier\n") ;} ;

type: array_type {printf("Type: ArrayType\n") ;}
      | boolean_type {printf("Type: BooleanType\n") ;}
      | integer_type {printf("Type: IntegerType\n") ;}
      | identifier {printf("Type: Identifier\n") ;} ;

array_type: INT_TYPE OPEN_BRACKETS CLOSE_BRACKETS {printf("ArrayType: %s %s %s\n", $1, $2, $3) ;} ;

boolean_type: BOOLEAN {printf("BooleanType: %s\n", $1) ;} ;

integer_type: INT_TYPE {printf("IntegerType: %s\n", $1) ;} ;

statements: statement statements {printf("Statements: statement Statements\n") ;}
            | ;

statement: block {printf("Statement: Block\n") ;}
           | assignment_statement {printf("Statement: AssignmentStatement\n") ;}
           | array_assignment_statement {printf("Statement: ArrayAssignmentStatement\n") ;}
           | if_statement {printf("Statement: IfStatement\n") ;}
           | while_statement {printf("Statement: WhileStatement\n") ;}
           | print_statement {printf("Statement: PrintStatement\n") ;} ;

block: OPEN_SCOPE statements CLOSE_SCOPE {printf("Block: %s Statements %s\n", $1, $3) ;} ;

assignment_statement: identifier EQUALS expression SEMICOLON {printf("AssignmentStatement: Identifier %s Expression %s\n", $2, $4) ;} ;

array_assignment_statement: identifier OPEN_BRACKETS expression CLOSE_BRACKETS EQUALS expression SEMICOLON 
                            {printf("ArrayAssignmentStatement: Identifier %s Expression %s %s Expression %s\n", $2, $4, $5, $7) ;} ;

if_statement: IF OPEN_PARENTHESIS expression CLOSE_PARENTHESIS statement ELSE statement 
              {printf("%s %s Expression %s Statement %s Statement\n", $1, $2, $4, $6) ;} ;

while_statement: WHILE OPEN_PARENTHESIS expression CLOSE_PARENTHESIS statement {printf("%s %s Expression %s Statement\n", $1, $2, $4) ;} ;

print_statement: PRINT OPEN_PARENTHESIS expression CLOSE_PARENTHESIS SEMICOLON {printf("%s %s Expression %s %s\n", $1, $2, $4, $5) ;} ;

expression: and_expression {printf("Expression: AndExpression\n") ;}
            | compare_expression {printf("Expression: CompareExpression\n") ;}
            | plus_expression {printf("Expression: PlusExpression\n") ;}
            | minus_expression {printf("Expression: MinusExpression\n") ;}
            | times_expression {printf("Expression: TimesExpression\n") ;}
            | array_lookup {printf("Expression: ArrayLookup\n") ;}
            | array_length {printf("Expression: ArrayLength\n") ;}
            | message_send {printf("Expression: MessageSend\n") ;}
            | primary_expression {printf("Expression: PrimaryExpression\n") ;} ;

and_expression: primary_expression AND primary_expression {printf("AndExpression: PrimaryExpression %s PrimaryExpression\n", $2) ;} ;

compare_expression: primary_expression COMPARE primary_expression {printf("CompareExpression: PrimaryExpression %s PrimaryExpression\n", $2) ;} ;

plus_expression: primary_expression PLUS primary_expression {printf("PlusExpression: PrimaryExpression %s PrimaryExpression\n", $2) ;} ;

minus_expression: primary_expression MINUS primary_expression {printf("MinusExpression: PrimaryExpression %s PrimaryExpression\n", $2) ;} ;

times_expression: primary_expression STAR primary_expression {printf("TimesExpression: PrimaryExpression %s PrimaryExpression\n", $2) ;} ;

array_lookup: primary_expression OPEN_BRACKETS primary_expression CLOSE_BRACKETS 
              {printf("ArrayLookup: PrimaryExpression %s PrimaryExpression %s\n", $2, $4) ;} ;

array_length: primary_expression DOT LENGTH {printf("ArrayLength: PrimaryExpression %s %s\n", $2, $3) ;} ;

message_send: primary_expression DOT identifier OPEN_PARENTHESIS CLOSE_PARENTHESIS 
              {printf("MessageSend: PrimaryExpression %s Identifier %s %s\n", $2, $4, $5) ;}
              | primary_expression DOT identifier OPEN_PARENTHESIS expression_list CLOSE_PARENTHESIS 
              {printf("MessageSend: PrimaryExpression %s Identifier %s ExpressionList %s\n", $2, $4, $6) ;} ;

expression_list: expression expression_rests {printf("ExpressionList: Expression ExpressionRests\n") ;} ;

expression_rests: expression_rest expression_rests {printf("ExpressionRests: ExpressionRest ExpressionRests\n") ;}
                  | ;

expression_rest: COMMA expression {printf("ExpressionRest: %s Expression\n", $1) ;} ;

primary_expression: integer_literal {printf("PrimaryExpression: IntegerLiteral\n") ;}
                    | true_literal {printf("PrimaryExpression: TrueLiteral\n") ;}
                    | false_literal {printf("PrimaryExpression: FalseLiteral\n") ;}
                    | identifier {printf("PrimaryExpression: Identifier\n") ;}
                    | this_expression {printf("PrimaryExpression: ThisExpression\n") ;}
                    | array_allocation_expression {printf("PrimaryExpression: ArrayAllocationExpression\n") ;}
                    | allocation_expression {printf("PrimaryExpression: AllocationExpression\n") ;}
                    | not_expression {printf("PrimaryExpression: NotExpression\n") ;}
                    | bracket_expression {printf("PrimaryExpression: BracketExpression\n") ;} ;

integer_literal: NUMBER {printf("IntegerLiteral: %s\n", $1) ;} ;

true_literal: TRUE {printf("TrueLiteral: %s\n", $1) ;} ;

false_literal: FALSE {printf("FalseLiteral: %s\n", $1) ;} ;

identifier: IDENTIFIER {printf("Identifier: %s\n", $1) ;} ;

this_expression: THIS {printf("ThisExpression: %s\n", $1) ;} ;

array_allocation_expression: ALLOCATION INT_TYPE OPEN_BRACKETS expression CLOSE_BRACKETS 
                             {printf("ArrayAllocationExpression: %s %s %s Expression %s\n", $1, $2, $3, $5) ;} ;

allocation_expression: ALLOCATION identifier OPEN_PARENTHESIS CLOSE_PARENTHESIS 
                       {printf("AllocationExpression: %s Identifier %s %s\n", $1, $3, $4) ;} ;

not_expression: NEGATION expression {printf("NotExpression: %s Expression\n", $1) ;} ;

bracket_expression: OPEN_PARENTHESIS expression CLOSE_PARENTHESIS {printf("BracketExpression: %s Expression %s\n", $1, $3) ;} ;

%%

int main (void) {
    return yyparse();
}

int yyerror (char *msg) {
    return fprintf (stderr, "Error: %s\n", msg);
}
