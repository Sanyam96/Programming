// Program to cyclically rotate an array by one

/*
Given an array, cyclically rotate the array clockwise by one.

	Input:  arr[] = {1, 2, 3, 4, 5}
	Output: arr[] = {5, 1, 2, 3, 4}

*/


#include <bits/stdc++.h>
using namespace std;

void rotate( int arr[], int n) {
	
	int x = arr[n-1];

	for (int i = n-1; i > 0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = x;
}

int main() {

	int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    std::cout << "Given Array is : ";
    for (int i = 0; i < n; ++i) {
    	cout << arr[i] << " ";
    }
    cout << std::endl;

    rotate(arr, n);

    std::cout << "Rotated Array is : ";
    for (int i = 0; i < n; ++i) {
    	cout << arr[i] << " ";
    }
    cout << std::endl;
    return 0;
}
