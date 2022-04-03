CC=gcc
CFLAGS=-g
a: main.c header.h linkedList.c circularLinkedList.c doublyLinkedList.c
	$(CC) $(CFLAGS) -o a main.c -lm
