CFLAGS=-Wall -g -std=c11 -Wextra
# -Wall enables compile time warnings
# -Wextra enables even more like -Wunused-parameter.
# -std=c99  is specific to C language and enables C99 standart (e.g. loop initial declarations)

# More than one executable can be specified as result from a taget.
# You can use one of the names to execute make all only for one of the targets.
all: ex1
clean:
	rm -f ex1