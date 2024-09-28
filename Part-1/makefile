output.txt: a.out
	./a.out < ass3_22CS10075_22CS30025_test.c > output.txt

./a.out: lex.yy.o ass3_22CS10075_22CS30025.o 
	gcc lex.yy.o ass3_22CS10075_22CS30025.o 

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

ass3_22CS10075_22CS30025.o: ass3_22CS10075_22CS30025.c 
	gcc -c ass3_22CS10075_22CS30025.c

lex.yy.c: ass3_22CS30025_22CS10075.l
	flex ass3_22CS30025_22CS10075.l

clean:
	rm -f lex.yy.o lex.yy.c output.txt ass3_22CS10075_22CS30025.o a.out


