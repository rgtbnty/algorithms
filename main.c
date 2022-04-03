const int MAX = 10;
//
//
//

#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/*
void p(int q) {
	printf("%d\n", q);
}
*/
void printarr(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main() {
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int list1[] = {1, 2, 3, 4, 5};
	int list2[] = {1, 2, 3, 4};
	int so[] = {5, 3, 9, 2, 7, 1, 8, 10, 4, 6};

	int result;
	int want = 4;
	//result = linearSearch(list, want);
	int a, b, c, d, e;
/*	a = binarySearch(list2, 1);
	b = binarySearch(list2, 2);
	c = binarySearch(list2, 3);
	d = binarySearch(list2, 4);
	//e = binarySearch(list1, 5);
	printf("%d %d %d %d\n", a, b, c, d); */
	//bubbleSort(so, MAX);
//	selectionSort(so, MAX);
	insertionSort(so, MAX);
	printarr(so, MAX);
} 
