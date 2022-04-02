CC=gcc
CFLAGS=-g
a: main.c header.h linkedList.c
	$(CC) $(CFLAGS) -o a main.c -lm
