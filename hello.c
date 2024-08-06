#include <stdio.h>
double average(int a[], int n)
{
	// Find the sum of array element
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];

	return (double)sum / n;
}
int main()
{

	int arr[] = { 1, 2, 3, 4, 5 };

	
	int n = sizeof(arr) / sizeof(arr[0]);

	int avg = average(arr, n);
	printf("Average = %d ", avg);
	return 0;
}
