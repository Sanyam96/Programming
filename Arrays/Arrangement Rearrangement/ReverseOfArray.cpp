// Reverse Of Array
/*
input  : 5
		 1 2 3 4 5
output : 5 4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

// Approach 2
// Recursive Way
// Time Complexity: O(n)

void reverseArray(int arr[], int start, int end) {

	int temp;
	if (start >= end) {
 		return;
	}
	temp = arr[start];   
	arr[start] = arr[end];
	arr[end] = temp;
	reverseArray(arr, start+1, end-1);   
}     
 
void printArray(int arr[], int size) {
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[]) {
	int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    reverseArray(arr, 0, 4);
    cout << "Reverse Array is n : ";
    printArray(arr, 5);    
	return 0;
}

/*
// Approach 1
// Iterative Method
// Time Complexity: O(n)

int main() {

	int n;
	cout << "Enter number of Array elements : ";
	cin >> n;

	int arr[50];
	cout << "Enter " << n <<  " Array Elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int startIndex = 0;
	int endIndex = n-1;

	while(endIndex > startIndex) {
	    int temp = arr[endIndex];
	    arr[endIndex] = arr[startIndex];
	    arr[startIndex] = temp;
	    startIndex++;
	    endIndex--;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}
*/
