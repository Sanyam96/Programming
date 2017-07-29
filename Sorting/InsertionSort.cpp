// Insertion Sort
/*

Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.

----------------------------------------------------------------------------------------------------
12, 11, 13, 5, 6

Let us loop for i = 1 (second element of the array) to 5 (Size of input array)

i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12
11, 12, 13, 5, 6

i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13
11, 12, 13, 5, 6

i = 3. 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position.
5, 11, 12, 13, 6

i = 4. 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position.
5, 6, 11, 12, 13


*/

#include <bits/stdc++.h>
using namespace std;

/* Function for Insertion Sort */
void insertionSort(int arr[], int n) {

	int key, j;
	for (int i = 0; i < n; ++i)	{
		key = arr[i];
		j = i-1;

		/* Move elements of arr[0..i-1], that are
		  greater than key, to one position ahead
		  of their current position */
		while (j >= 0 && arr[j] > key) {
		   arr[j+1] = arr[j];
		   j = j-1;
		}
		arr[j+1] = key;
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
    insertionSort(arr, n);
    cout << "Sorted Array : ";
    printArray(arr, n);
    return 0;
}