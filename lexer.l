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
"\n"["\t"" "]*"\n"                  {printf("Empty Line\n");
                                     yyless(yyleng-1);
                                     yylineno++;
                                    }
"\n"["\t"]*"#"[^\n]*                {printf("This is a comment\n");
                                     yylineno++;}
"\n"["\t"]*                         {
                                           if(def_mode == 0){
                                            fprintf(yyout, "%s", yytext);

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
                                        fprintf(yyout, "%s", yytext);
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
";"                                 {fprintf(yyout, "%s", yytext);return T_semi_colon;}
"="                                 {fprintf(yyout, "%s", yytext);printf("Matches Equal\n"); return T_eq;}
","                                 {fprintf(yyout, "%s", yytext);return T_comma;}
"+="                                {fprintf(yyout, "%s", yytext);return T_plus_eq;}
"-="                                {fprintf(yyout, "%s", yytext);return T_minus_eq;}
"*="                                {fprintf(yyout, "%s", yytext);return T_star_eq;}
"/="                                {fprintf(yyout, "%s", yytext);return T_div_eq;}
"%="                                {fprintf(yyout, "%s", yytext);return T_mod_eq;}
"|="                                {fprintf(yyout, "%s", yytext);return T_or_eq;}
"^="                                {fprintf(yyout, "%s", yytext);return T_xor_eq;}
"del"                               {fprintf(yyout, "%s", yytext);return T_del;}
"pass"                              {fprintf(yyout, "%s", yytext);return T_pass;}
"break"                             {fprintf(yyout, "%s", yytext);return T_break;}
"continue"                          {fprintf(yyout, "%s", yytext);return T_continue;}
"return"                            {fprintf(yyout, "%s", yytext);return T_return;}
'import'                            {fprintf(yyout, "%s", yytext);printf("Matched Import"); return T_import;}
"from"                              {fprintf(yyout, "%s", yytext);printf("Matched From"); return T_from;}
"*"                                 {fprintf(yyout, "%s", yytext);return T_star;}
"("                                 {fprintf(yyout, "%s", yytext);return T_Lparan;}
")"                                 {fprintf(yyout, "%s", yytext);return T_Rparan;}
"as"                                {fprintf(yyout, "%s", yytext);return T_as;}
"."                                 {fprintf(yyout, "%s", yytext);printf("Matched Dot\n"); return T_dot;}
"if"                                {fprintf(yyout, "%s", yytext);printf("Matched If\n"); return T_if;}
":"                                 {fprintf(yyout, "%s", yytext);printf("Matched Colon\n"); return T_colon;}
"elif"                              {fprintf(yyout, "%s", yytext);return T_elif;}
"else"                              {fprintf(yyout, "%s", yytext);return T_else;}
"for"                               {fprintf(yyout, "%s", yytext);return T_for;}
"in"                                {fprintf(yyout, "%s", yytext);return T_in;}
"or"                                {fprintf(yyout, "%s", yytext);return T_or;}
"and"                               {fprintf(yyout, "%s", yytext);printf("Matched and\n"); return T_and;}
"not"                               {fprintf(yyout, "%s", yytext);return T_not;}
"<"                                 {fprintf(yyout, "%s", yytext);return T_lt;}
">"                                 {fprintf(yyout, "%s", yytext);return T_gt;}
"=="                                {fprintf(yyout, "%s", yytext);return T_deq;}
">="                                {fprintf(yyout, "%s", yytext);return T_ge;}
"<="                                {fprintf(yyout, "%s", yytext);return T_le;}
"!="                                {fprintf(yyout, "%s", yytext);return T_noteq;}
"is"                                {fprintf(yyout, "%s", yytext);return T_is;}
"is"[" "]+"not"                     {fprintf(yyout, "%s", yytext);return T_isnot;}
"not"[" "]+"in"                     {fprintf(yyout, "%s", yytext);return T_notin;}
"|"                                 {fprintf(yyout, "%s", yytext);return T_bitwiseor;}
"&"                                 {fprintf(yyout, "%s", yytext);return T_bitwiseand;}
"^"                                 {fprintf(yyout, "%s", yytext);return T_bitwisexor;}
"<<"                                {fprintf(yyout, "%s", yytext);return T_leftshift;}
">>"                                {fprintf(yyout, "%s", yytext);return T_rightshift;}
"+"                                 {fprintf(yyout, "%s", yytext);return T_plus;}
"-"                                 {fprintf(yyout, "%s", yytext);return T_minus;}
"/"                                 {fprintf(yyout, "%s", yytext);return T_divide;}
"%"                                 {fprintf(yyout, "%s", yytext);return T_mod;}
"//"                                {fprintf(yyout, "%s", yytext);return T_double_divide;}
"~"                                 {fprintf(yyout, "%s", yytext);return T_tilde;}
"**"                                {fprintf(yyout, "%s", yytext);return T_double_star;}
"["                                 {fprintf(yyout, "%s", yytext);return T_squarebleft;}
"]"                                 {fprintf(yyout, "%s", yytext);return T_squarebright;}
"..."                               {fprintf(yyout, "%s", yytext);return T_ellipsis;}
"None"                              {fprintf(yyout, "%s", yytext);return T_none;}
"True"                              {fprintf(yyout, "%s", yytext);return T_true;}
"False"                             {fprintf(yyout, "%s", yytext);return T_false;}
"def"                               {fprintf(yyout, "%s", yytext);return T_def;}
" "+                                {fprintf(yyout, " ");/*Extra Whitespace*/}
({letter}|_)({letter}|_|{digit})*   {fprintf(yyout, "%s", yytext);printf("Matched %s\n", yytext); return T_name;}
{digit}+                            {fprintf(yyout, "%s", yytext);printf("Found a number\n"); return T_number;}
\"(.)*\"                            {fprintf(yyout, "%s", yytext);return T_string;}
%%

int yywrap(void) {
  return 1;
}

void yyerror(char *s) {
  fprintf(stdout,"line no: %d %s\n",yylineno,s);
}

int main(int argc,char *argv[])
{
   FILE *fh, *fho;
   initStack(&indent, 1000);
   push(&indent, 0);
   fh=fopen(argv[1], "r");
   fho=fopen("test_output.py", "w");
   yyin=fh;
   yyout=fho;
   yyparse();
   fclose(yyin);
   return 0;
}
