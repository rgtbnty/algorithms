CC=gcc
CFLAGS=-g
a: main.c header.h
	$(CC) $(CFLAGS) -o a main.c -lm
