// C implementation of simple method to find count of
// pairs with given sum.
#include <stdio.h>

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int sum)
{
	int count = 0; // Initialize result

	// Consider all possible pairs and check their sums
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				count++;

	return count;
}

// Driver function to test the above function
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 10;
	printf("Count of pairs is %d",
		getPairsCount(arr, n, sum));
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
