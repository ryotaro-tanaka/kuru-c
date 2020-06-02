CC := gcc
CFLAGS := -g -Wall -Wextra

# $ make
main: main.o

# $ make clean
clean:
	$(RM) *.o
	$(RM) main
