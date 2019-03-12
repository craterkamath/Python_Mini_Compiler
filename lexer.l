%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "y.tab.h"
    #include "stack.c"  
	#include "uthash.h"

	extern YYSTYPE yylval;

	  typedef struct token_structure{
			char* name;
			char* type;
			int scope;
		}token_structure;


	STACK indent;
	int pointer=0;
	int counter=0;
	int def_mode=0;

	typedef struct symbol_node{
		char name[31]; 		//Variable name
		int line_no_d; 		// Line Number declared
		int line_no_used; 	//line number where its used
		char* type;			//Type pf the variable
		char* storage;  	// Storage
		UT_hash_handle hh;	//Makes this structure hashable  
	} symbol_node;


   symbol_node* hash_table[1000];
   char* p;

   void printTable(int scope){
   	symbol_node *iter;
	printf("Scope: %d \n", scope);
   	printf("Name\t| Type\t\t| Line Number Declared\t| Line Number Used\t\n");
   	for(iter = hash_table[scope]; iter != NULL; iter = iter->hh.next){
   		printf("%s\t| %s\t| %d\t\t\t| %d\t\t\n", iter->name, iter->type, iter->line_no_d, iter->line_no_used);
   	}
   	printf("\n");
   }

   void clearScope(int scope){
   	symbol_node *iter, *temp;
   	HASH_ITER(hh, hash_table[scope], iter, temp){
   		HASH_DEL(hash_table[scope], iter);
   		free(iter);
   	}
   }

   void updateType(int scope,char* name, char* type){
   		symbol_node* temp = NULL;
   		//printf("Inside Function\n");
   		HASH_FIND_STR(hash_table[scope], name, temp);
   		if(temp != NULL)
   			strcpy(temp->type, type);
   }
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
                                                    int removed_scope = pop(&indent);
                                                    printTable(removed_scope);
                                                    clearScope(removed_scope);
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
                                            int removed_scope = pop(&indent);
                                            printTable(removed_scope);
                                            clearScope(removed_scope);
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
"import"                            {fprintf(yyout, "%s", yytext);printf("Matched Import\n"); return T_import;}
"from"                              {fprintf(yyout, "%s", yytext);printf("Matched From\n"); return T_from;}
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
({letter}|_)({letter}|_|{digit})*   {
                                       fprintf(yyout, "%s", yytext);
                                       printf("Matched : %s\n", yytext);
                                       int scope = peek(&indent);
                                       char* variable_name = yytext;
                                       symbol_node* temp = NULL;
                                       //printf("Stack Scope: %d\n", peek(&indent));
                                       HASH_FIND_STR(hash_table[scope], variable_name, temp);
                                       //printf("Stack Scope: %d\n", peek(&indent));            
                                       if(temp == NULL){
											temp = malloc(sizeof(symbol_node));
											strcpy(temp->name, variable_name);
											temp->line_no_d = yylineno;
											temp->line_no_used = yylineno;
											temp->type = (char*)malloc(sizeof(char) * 20);
											strcpy(temp->type, "variable");
											temp->storage = (char*)malloc(sizeof(char) * 100);
											strcpy(temp->storage, " ");
											HASH_ADD_STR(hash_table[scope], name, temp);
											printf("Variable Added: %s\n", temp->name);
										}else{
											printf("Variable Found: %s\n", temp->name);
											temp->line_no_used = yylineno;
										}
										//printf("yytext: %s \n", yytext);
										yylval.data = (struct token_structure*)malloc(sizeof(struct token_structure));
										yylval.data->scope = scope;
										yylval.data->name=strdup(yytext);
										//printf("Finished Sending %s %d %s\n", yytext, yylval.data->scope,  yylval.data->name);
                                       return T_name;
                                    }
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
   //symbol_node** hash_table = (symbol_node**) malloc(1000 * sizeof(symbol_node*));
   int i;
   for(i = 0; i < 1000; i++)
   		hash_table[i] = NULL;
   fh=fopen(argv[1], "r");
   char* output_file = (char*)malloc(sizeof(char) * 100);
   strcpy(output_file, "optimized_output.py");
   // strcat(output_file, argv[1]);
   fho=fopen(output_file, "w");
   yyin=fh;
   yyout=fho;
   yyparse();
   int scope = peek(&indent);
   for(i = 0; i <= scope; ++i){
   	printTable(i);
   	printf("===============================================\n");
   }
   fclose(yyin);
   return 0;
}
