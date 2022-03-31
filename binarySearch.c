int binarySearch(int a[], int value) {
	int low = 0;
	int high = MAX;
	int mid;

	while (low <= high) {
		mid = (high + low) / 2;
		if (a[mid] == value) 
			return mid;
		else if (a[mid] < value)
			low = mid + 1;
		else /* value < a[mid] */
			high = mid - 1;
	}
	return -1;
}
