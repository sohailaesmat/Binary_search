// Sohaila Esmat

#include <stdio.h>
int binarySearch(int arr[], int start, int end, int guess)
{
	while (start <= end) {
		int middle = (start + end) / 2;
		if (arr[middle] == guess)
			return middle;
		if (arr[middle] < guess)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return -1;
}
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int guess = 10;
	int result = binarySearch(arr, 0, n - 1, guess);
	(result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",result);
	return 0;
}
