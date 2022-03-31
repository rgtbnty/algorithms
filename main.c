const int MAX = 10;

#include <stdio.h>
#include "header.h"


int main() {
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int result;
	int want = 4;
	result = linearSearch(list, want);
	printf("%d\n", result);
} 
