// Majority Element: 
// A majority element in an array A[] of size n is an element that appears more than n/2 times 
// (and hence there is at most one such element).

/*

	I/P : 3 3 4 2 4 4 2 4 4
	O/P : 4 

	I/P : 3 3 4 2 4 4 2 4
	O/P : NONE

*/

#include <bits/stdc++.h>
using namespace std;

// Approach 3
// using Array Of Array

int maxElement(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; ++i) {
		if ( max <= arr[i] ) {
			max = arr[i];
		}	
	}
	return max;
}

int findCandidate(int arr[], int size) {

	int sizeOfTempArray = maxElement(arr, size);
	int *tempArray = new int[sizeOfTempArray];

	for (int i = 0; i <= sizeOfTempArray+1; ++i) {
		tempArray[i] = 0;
	}

	for (int i = 0; i <= size; ++i) {
		tempArray[arr[i]] = tempArray[arr[i]] + 1;
	}

	int maxElementOccuring = maxElement(tempArray, sizeOfTempArray+1);
	int indexOfMaxElement = 0;
	for (int i = 0; i < sizeOfTempArray+1; ++i)	{
		if(tempArray[i] == maxElementOccuring) {
			indexOfMaxElement = i;
		}
	}
	delete [] tempArray;
	return indexOfMaxElement;
}

bool isMajority(int a[], int size, int cand)
{
	int i, count = 0;

	for (i = 0; i < size; i++)
		if (a[i] == cand) {
			count++;
		}
		if (count > size/2) {
			return 1;
		}
		else {
			return 0;
		}
}

void printMajority(int a[], int size)
{
	int cand = findCandidate(a, size);

	if (isMajority(a, size, cand)) {
		printf("%d ", cand);
	}
	else {
		printf("No Majority Element");
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int size = (sizeof(a))/sizeof(a[0]);
    printMajority(a, size);
    // int x = findCandidate(a, size);
    // cout << "\n" << x << endl;
    cout << endl;
	return 0;
}


/*
// Approach 2
// Using Moore’s Voting Algorithm
// Time Complexity: O(n)
// Auxiliary Space : O(1)

int findCandidate(int a[], int size)
{
	int maj_index = 0, count = 1;
	int i;
	for (i = 1; i < size; i++) {
		if (a[maj_index] == a[i]) {
			count++;
		}
		else {
			count--;
		}

		if (count == 0) {
			maj_index = i;
			count = 1;
		}
	}
	
	return a[maj_index];
}

bool isMajority(int a[], int size, int cand)
{
	int i, count = 0;

	for (i = 0; i < size; i++)
		if (a[i] == cand) {
			count++;
		}
		if (count > size/2) {
			return 1;
		}
		else {
			return 0;
		}
}

void printMajority(int a[], int size)
{
	int cand = findCandidate(a, size);

	if (isMajority(a, size, cand)) {
		printf(" %d ", cand);
	}
	else {
		printf("No Majority Element");
	}
}

int main(int argc, char const *argv[]) {
	
	int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int size = (sizeof(a))/sizeof(a[0]);
    printMajority(a, size);
    printf("\n");

	return 0;
}
*/

/*
// Approach 1
// Basic Approach of having 2 for loops
// Time Complexity: O(n*n). Auxiliary Space : O(1).

int main() {

	int a[] = {3, 3, 4, 2, 4, 4, 2, 4};
    int size = (sizeof(a))/sizeof(a[0]);

    int key = a[0];
    int count = 1;
    int maxKey = a[0];
    int maxCount = 1;

    for (int i = 0; i < size; ++i) {
		
		key = a[i];
		count = 0;

    	for (int j = 0; j < size; ++j) {
    		if( a[j] == key) {
    			count++;
    		}
    	}
    	if(maxCount <= count) {
    		maxKey = key;
    		maxCount = count;
    	}
    }
    if( maxCount > size/2) {
    	cout << "Max Count : " << maxCount << "  Max Key : " << maxKey << "\n";    
    }
    else {
    	cout << "NONE" << endl;
    }

    return 0;
}
*/
