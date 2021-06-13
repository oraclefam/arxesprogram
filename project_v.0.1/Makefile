all: project

project.tab.c project.tab.h:	project.y
	bison -t -v -d project.y

lex.yy.c: project.l project.tab.h
	flex project.l

project: lex.yy.c project.tab.c project.tab.h
	gcc -o project project.tab.c lex.yy.c

clean:
	rm project project.tab.c lex.yy.c project.tab.h project.output
