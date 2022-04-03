void insertionSort(int a[], int n) {
	int i, j, temp;
	for ( i = 1; i < n; ++i) {
		j = i;
		while (j >= 1 && (a[j-1] > a[j])) {
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			--j;
		}
	}
}
