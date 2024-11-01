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
		  test-outputs/TinyC3_22CS10075_22CS30025_quads*\
		  -rf test-outputs

	

test:
	mkdir -p ./test-outputs
	@echo "\ntest-inputs contains the test cases.\n"
	@echo "\nRunning test cases...\n"
	./a.out < test-inputs/TinyC3_22CS10075_22CS30025_test1.c > test-outputs/TinyC3_22CS10075_22CS30025_quads1.out
	@sleep 0.2
	./a.out < test-inputs/TinyC3_22CS10075_22CS30025_test2.c > test-outputs/TinyC3_22CS10075_22CS30025_quads2.out
	@sleep 0.2
	./a.out < test-inputs/TinyC3_22CS10075_22CS30025_test3.c > test-outputs/TinyC3_22CS10075_22CS30025_quads3.out
	@sleep 0.2
	./a.out < test-inputs/TinyC3_22CS10075_22CS30025_test4.c > test-outputs/TinyC3_22CS10075_22CS30025_quads4.out
	@sleep 0.2
	./a.out < test-inputs/TinyC3_22CS10075_22CS30025_test5.c > test-outputs/TinyC3_22CS10075_22CS30025_quads5.out
	@sleep 0.2

	@echo "\nTest cases run successfully.\n"
	@echo "\nCheck test-outputs folder for the outputs.\n"
