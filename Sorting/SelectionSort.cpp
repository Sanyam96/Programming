// Selection Sort!
/*

arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 

*/

#include <bits/stdc++.h>
using namespace std;

/* Function for Swapping of 2 Elements*/
void swap(int *xp, int *yp) {

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/* Function for Selection Sort */
void selectionSort(int arr[], int n) {

	int min_idx;

	for (int i = 0; i < n-1; ++i)	{
		for (int j = i + 1; j < n; ++j)	{
			if( arr[i] > arr[j] ) {
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

/* Function to print an array */
void printArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
    	cout << arr[i] << " ";
    }
    cout << endl;
}

/* Main Utility Function */
int main() {

	int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted Array : ";
    printArray(arr, n);
    return 0;
}

/*
Note: 
Time Complexity: O(n^2) as there are two nested loops.

Auxiliary Space: O(1)
The good thing about selection sort is it never makes more than O(n) swaps 
and can be useful when memory write is a costly operation.
*/