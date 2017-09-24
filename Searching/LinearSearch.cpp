// Linear Search in CPP
#include <bits/stdc++.h>
using namespace std;

// Linearly search x in arr[].  If x is present then return its 
// location,  otherwise return -1
int search(int arr[], int n, int x) {
    int i;

    for( i = 0; i < n; i++) {
    
        if ( arr[i] == x) {
     		return i;
        }
    }
    return -1;
}

int main() {
	int arr[5] = {6, 2, 9, 109, 66};
	int key1 = 8;
	int key2 = 6;
	int key3 = 109;
	cout << search(arr, 5, key1) << "\n";
	cout << search(arr, 5, key2) << "\n";
	cout << search(arr, 5, key3) << "\n";
    return 0;
}
