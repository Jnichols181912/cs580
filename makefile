CC=gcc -Wall

all: pairs

pairs: utils.o ar_stack.o pairs.h pairs.c
	$(CC) -o pairs pairs.c utils.o ar_stack.o

utils.o: utils.h utils.c
	$(CC) -c utils.c

ar_stack.o: ar_stack.h ar_stack.c
	$(CC) -c ar_stack.c

tidy :
	rm -f utils.o core

clean :
	rm -f pairs utils.o core
