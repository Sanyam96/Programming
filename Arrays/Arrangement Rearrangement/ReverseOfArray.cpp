// Reverse Of Array
/*
input  : 5
		 1 2 3 4 5
output : 5 4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

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
