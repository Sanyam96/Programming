// Reverse Of Array
/*
input  : 5
		 1 2 3 4 5
output : 5 4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[50];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}

	int startIndex = 0;
	int endIndex = n-1;

	while(endIndex > startIndex) {
	    /* code */
	    int temp = arr[endIndex];
	    arr[endIndex] = arr[startIndex];
	    arr[startIndex] = temp;
	    startIndex++;
	    endIndex--;
	}

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << arr[i] << " ";
	}
	cout << endl;

    return 0;
}
