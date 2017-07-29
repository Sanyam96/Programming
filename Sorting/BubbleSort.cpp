// Bubble Sort!!
/*

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in wrong order.

Example:
First Pass:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), 
algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. 
The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

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
void bubbleSort(int arr[], int n) {

	for (int i = 0; i < n-1; ++i) {

		for (int j = 0; j < n-i-1; ++j) {

			if (arr[j] > arr[j+1]) {

            	swap(&arr[j], &arr[j+1]);
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

/* Main Function */
int main() {

	int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted Array : ";
    printArray(arr, n);
    return 0;
}