all: a.out

a.out: tinyC2_22CS30025_22CS10075.c y.tab.c lex.yy.c
	gcc tinyC2_22CS30025_22CS10075.c y.tab.c lex.yy.c -o a.out

y.tab.c y.tab.h: tinyC2_22CS10075_22CS30025.y
	yacc -d tinyC2_22CS10075_22CS30025.y

lex.yy.c: tinyC2_22CS10075_22CS30025.l
	lex tinyC2_22CS10075_22CS30025.l

run: a.out
	./a.out < input_22CS10075_22CS30025.c > output_22CS10075_22CS30025.txt

clean:
	rm -f a.out y.tab.c y.tab.h lex.yy.c output_22CS10075_22CS30025.txt