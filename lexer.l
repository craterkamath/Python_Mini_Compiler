%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "y.tab.h"
    #include "stack.c"

    STACK indent;
    int pointer=0;
    int counter=0;
    int def_mode=0;
%}
letter [A-Za-z]
digit [0-9]
%%
"\n"["\t"]*"#"[^\n]*                {printf("This is a comment\n");}
"\n"["\t"]*                         {
                                        if(def_mode == 0){
                                            yyless(0);
                                            def_mode = 1;
                                            return T_newline;
                                        }else{
                                            if(yyleng-1 == peek(&indent)){
                                                def_mode = 0;
                                                yylineno++;
                                            }else{
                                                if(peek(&indent) < yyleng-1){
                                                    push(&indent, yyleng-1);
                                                    yyless(0);
                                                    printf("Indenting \n");
                                                    return T_indent;
                                                }
                                                if(peek(&indent) > yyleng-1){
                                                    pop(&indent);
                                                    printf("Dedenting \n");
                                                    yyless(0);
                                                    return T_dedent;
                                                }
                                            }

                                        }
                                    }
<<EOF>>                             {
                                        if (peek(&indent) != 0){
                                            pop(&indent);
                                            printf("Dedenting EOF \n");
                                            return T_dedent;
                                       }else{
                                            printf("Found EOF\n");
                                            yyterminate();
                                            return T_eof;
                                       }
                                    }
";"                                 {return T_semi_colon;}
"="                                 {printf("Matches Equal\n"); return T_eq;}
","                                 {return T_comma;}
"+="                                {return T_plus_eq;}
"-="                                {return T_minus_eq;}
"*="                                {return T_star_eq;}
"/="                                {return T_div_eq;}
"%="                                {return T_mod_eq;}
"|="                                {return T_or_eq;}
"^="                                {return T_xor_eq;}
"del"                               {return T_del;}
"pass"                              {return T_pass;}
"break"                             {return T_break;}
"continue"                          {return T_continue;}
"return"                            {return T_return;}
'import'                            {printf("Matched Import"); return T_import;}
"from"                              {printf("Matched From"); return T_from;}
"*"                                 {return T_star;}
"("                                 {return T_Lparan;}
")"                                 {return T_Rparan;}
"as"                                {return T_as;}
"."                                 {printf("Matched Dot\n"); return T_dot;}
"if"                                {printf("Matched If\n"); return T_if;}
":"                                 {printf("Matched Colon\n"); return T_colon;}
"elif"                              {return T_elif;}
"else"                              {return T_else;}
"for"                               {return T_for;}
"in"                                {return T_in;}
"or"                                {return T_or;}
"and"                               {printf("Matched and\n"); return T_and;}
"not"                               {return T_not;}
"<"                                 {return T_lt;}
">"                                 {return T_gt;}
"=="                                {return T_deq;}
">="                                {return T_ge;}
"<="                                {return T_le;}
"!="                                {return T_noteq;}
"is"                                {return T_is;}
"is"[" "]+"not"                     {return T_isnot;}
"not"[" "]+"in"                     {return T_notin;}
"|"                                 {return T_bitwiseor;}
"&"                                 {return T_bitwiseand;}
"^"                                 {return T_bitwisexor;}
"<<"                                {return T_leftshift;}
">>"                                {return T_rightshift;}
"+"                                 {return T_plus;}
"-"                                 {return T_minus;}
"/"                                 {return T_divide;}
"%"                                 {return T_mod;}
"//"                                {return T_double_divide;}
"~"                                 {return T_tilde;}
"**"                                {return T_double_star;}
"["                                 {return T_squarebleft;}
"]"                                 {return T_squarebright;}
"..."                               {return T_ellipsis;}
"None"                              {return T_none;}
"True"                              {return T_true;}
"False"                             {return T_false;}
"def"                               {return T_def;}
" "                                 {/*Extra Whitespace*/}
({letter}|_)({letter}|_|{digit})*   {printf("Matched %s\n", yytext); return T_name;}
{digit}+                            {printf("Found a number\n"); return T_number;}
\"(.)*\"                            {return T_string;}
%%

int yywrap(void) {
  return 1;
}

void yyerror(char *s) {
  fprintf(stdout,"line no: %d %s\n",yylineno,s);
}

int main(int argc,char *argv[])
{
   FILE *fh;
   initStack(&indent, 1000);
   push(&indent, 0);
   fh=fopen(argv[1], "r");
   yyin=fh;
   yyparse();
   fclose(yyin);
   return 0;
}
