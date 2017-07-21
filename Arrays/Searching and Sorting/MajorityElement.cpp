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
