void bubbleSort(int a[], int n) {
	int temp;
	for (int i = 0; i < n; ++i) {
		for (int j = n-1; j > i; --j) {
			if ( a[j-1] > a[j]) {
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp; 
			}
		}
	}
}
