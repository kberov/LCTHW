CFLAGS=-Wall -g -std=c11 -Wextra
# -Wall enables compile time warnings
# -Wextra enables even more like -Wunused-parameter.
# -std=c99  is specific to C language and enables C99 standart (e.g. loop initial declarations)

# More than one executable can be specified as result from a target.
# You can use one of the names to execute "make all" only for one of the targets.
all: ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9
clean:
	rm -f ex1
	rm -f ex3
	rm -f ex4
	rm -f ex5
	rm -f ex6
	rm -f ex7
	rm -f ex8
	rm -f ex9

