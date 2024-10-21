a.out: TinyC3_22CS10075_22CS30025.tab.o TinyC3_22CS10075_22CS30025_translator.o lex.yy.o 
	g++ lex.yy.o TinyC3_22CS10075_22CS30025.tab.o TinyC3_22CS10075_22CS30025_translator.o -lfl

TinyC3_22CS10075_22CS30025_translator.o: TinyC3_22CS10075_22CS30025_translator.cxx TinyC3_22CS10075_22CS30025_translator.h
	g++ -c TinyC3_22CS10075_22CS30025_translator.h
	g++ -c TinyC3_22CS10075_22CS30025_translator.cxx 

lex.yy.o: lex.yy.c 
	g++ -c lex.yy.c 

TinyC3_22CS10075_22CS30025.tab.o: TinyC3_22CS10075_22CS30025.tab.c
	g++ -c TinyC3_22CS10075_22CS30025.tab.c 

lex.yy.c: TinyC3_22CS10075_22CS30025.l TinyC3_22CS10075_22CS30025.tab.h TinyC3_22CS10075_22CS30025_translator.h
	flex TinyC3_22CS10075_22CS30025.l

TinyC3_22CS10075_22CS30025.tab.c: TinyC3_22CS10075_22CS30025.y 
	bison -dtv TinyC3_22CS10075_22CS30025.y -W

TinyC3_22CS10075_22CS30025.tab.h: TinyC3_22CS10075_22CS30025.y 
	bison -dtv TinyC3_22CS10075_22CS30025.y -W

clean: 
	rm lex.yy.c\
		  lex.yy.o\
		  a.out\
		  TinyC3_22CS10075_22CS30025.tab.c\
		  TinyC3_22CS10075_22CS30025.tab.h\
		  TinyC3_22CS10075_22CS30025.tab.o\
		  TinyC3_22CS10075_22CS30025_translator.o\
		  TinyC3_22CS10075_22CS30025_translator.h.gch\
		  TinyC3_22CS10075_22CS30025.output\
		  TinyC3_22CS10075_22CS30025_test*

test:
	./a.out < test_inputs/TinyC3_22CS10075_22CS30025_test1.c > TinyC3_22CS10075_22CS30025_test1_output.txt
	./a.out < test_inputs/TinyC3_22CS10075_22CS30025_test2.c > TinyC3_22CS10075_22CS30025_test2_output.txt
	./a.out < test_inputs/TinyC3_22CS10075_22CS30025_test3.c > TinyC3_22CS10075_22CS30025_test3_output.txt
	./a.out < test_inputs/TinyC3_22CS10075_22CS30025_test4.c > TinyC3_22CS10075_22CS30025_test4_output.txt
	./a.out < test_inputs/TinyC3_22CS10075_22CS30025_test5.c > TinyC3_22CS10075_22CS30025_test5_output.txt