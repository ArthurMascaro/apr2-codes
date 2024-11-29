CC = gcc
CFLAGS = -Wall

all: soma_fatoriais

soma_fatoriais: main.o fatorial.o
	$(CC) $(CFLAGS) -o soma_fatoriais main.o fatorial.o

main.o: main.c fatorial.h
	$(CC) $(CFLAGS) -c main.c

fatorial.o: fatorial.c fatorial.h
	$(CC) $(CFLAGS) -c fatorial.c
