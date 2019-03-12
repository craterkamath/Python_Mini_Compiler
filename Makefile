make debug:
	lex lexer.l
	yacc --debug --verbose parser.y
	gcc y.tab.c lex.yy.c -g -ll -o output

make:
	lex lexer.l
	yacc -d parser.y
	gcc y.tab.c lex.yy.c -g -ll -o output