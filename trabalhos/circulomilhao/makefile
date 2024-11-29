CC = gcc
CFLAGS = -Wall -Wextra

all: meu_programa

meu_programa: main.o functions.o
	$(CC) $(CFLAGS) -o meu_programa main.o functions.o

main.o: main.c functions.h
	$(CC) $(CFLAGS) -c -o main.o main.c

functions.o: functions.c functions.h
	$(CC) $(CFLAGS) -c -o functions.o functions.c

clean:
	rm -f meu_programa main.o list.o
