void selectionSort(int a[], int n) {
	int lidx;
	int tget;
	int temp;
	for (int i = 0; i < n-1; ++i) {
		lidx = i;
		tget = a[i];
		for (int j = i+1; j < n; ++j) {
			if ( tget > a[j]) {
				lidx = j;
				tget = a[j];
			}
		}
		temp = a[i];
		a[i] = a[lidx];
		a[lidx] = temp;	
	}
}
