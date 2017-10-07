// Binary Search Implementation

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {

	if (high < low)
   		return -1;
   	
   	int mid = (low + high) / 2;  /*low + (high - low)/2;*/
   	
   	if (key == arr[mid])
		return mid;
   	if (key > arr[mid])
		return binarySearch(arr, (mid + 1), high, key);

   	return binarySearch(arr, low, (mid -1), key);
}

int main() {

    int n, key;
	int arr[] = {5, 6, 7, 8, 9, 10};
 
   	n = sizeof(arr)/sizeof(arr[0]);
   	key = 10;
 
   	printf("Index: %d\n", binarySearch(arr, 0, n, key) );
    
    return 0;
}
