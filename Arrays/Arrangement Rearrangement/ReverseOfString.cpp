// Reverse Of string
/*

input  : S a n y a m		 
output : m a y n a S

// Same as Reverse of Array ;) 
*/


#include <bits/stdc++.h>
using namespace std;

// Approach 2
// Recursive Way
// Time Complexity: O(n)

void reverseArray(char arr[], int start, int end) {

	char temp;
	if (start >= end) {
 		return;
	}
	temp = arr[start];  
	arr[start] = arr[end];
	arr[end] = temp;
	reverseArray(arr, start+1, end-1);   
}     
 
void printArray(string arr, int size) {
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[]) {
	
	char arr[] = {'S', 'a', 'n', 'y', 'a', 'm'};
    printArray(arr, 6);
    reverseArray(arr, 0, 5);
    cout << "Reverse String is : ";
    printArray(arr, 6);    
	return 0;
}

/*
// Approach 1
// Iterative Method
// Time Complexity: O(n)

int main() {

	char arr[] = {'S', 'a', 'n', 'y', 'a', 'm'};
	int n = 6;

	int startIndex = 0;
	int endIndex = n-1;

	while(endIndex > startIndex) {
	    char temp = arr[endIndex];
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
