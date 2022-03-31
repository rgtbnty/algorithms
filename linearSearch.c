int linearSearch(int a[], int value) {
	for (int i = 0; i < MAX; ++i) {
		if (a[i] == value) return i;
	}
	return -1;
}
