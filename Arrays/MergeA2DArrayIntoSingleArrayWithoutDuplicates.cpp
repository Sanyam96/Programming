// Merge a 2D array into single Array without Duplicates
/*
Given 2d array in which each row is sorted and there are unique elements in each row of the 2D matrix
but elements may repeat in other rows.
Output should be a single 1D array containing all the elements without duplicates in a Sorted Order

Input: 
		[2, 7, 12, 23, 40, 44, 71]
		[3, 4, 17, 20, 29, 40, 41]
		[8, 12, 23, 29, 33, 59, 78]
		[12, 21, 33, 67, 72, 76, 82]

Output: 
		[2, 3, 4, 7, 8, 12, 17, 20, 21, 23, 29, 33, 40, 41, 44, 59, 67, 71, 72, 76, 78, 82]
*/


// ******************************************************
// ******************************************************
		// ERROR IN PROGRAM !!
// ******************************************************
// ******************************************************		

#include <bits/stdc++.h>
using namespace std;

/*int minElement(int a, int b, int c, int d) {

	if( a < b && a < c && a < d) {
		return a;
	}
	else if( b < a && b < c && b < d) {
		return b;
	}
	else if( c < a && c < b && c < d ) {
		return c;
	}
	else {
		return d;
	}
}*/

/*void mergeArray(int *arr, int resArr[], int rows, int columns) {
	// 1st approach is to combine whole array into one array and remove duplicates
	// 2nd approach is like Union of arrays! consider each row as a single array and find union of arrays
	// the solution is using 2nd approach
	int * counterArray = new int[rows];

	for (int i = 0; i < rows; ++i) {
		counterArray[i] = 0;
	}

	
	counterArray[0]
	counterArray[1]
	counterArray[2]
	counterArray[3]

	

	// for (int i = 0; i < rows; ++i) {
	// 	for (int j = 0; j < columns; ++j) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int a = 0, b = 0, c = 0, d = 0;
	// while( a < columns && b < columns && c < columns && d << columns) {
		
	// }
	minElement(arr[0][a], arr[1][b], arr[2][c], arr[3][d]);



	delete [] counterArray;
}*/

int main() {

	// int arr[4][7] = { 
	// 					{2, 7, 12, 23, 40, 44, 71}, 
	// 					{3, 4, 17, 20, 29, 40, 41}, 
	// 					{8, 12, 23, 29, 33, 59, 78},
	// 					{12, 21, 33, 67, 72, 76, 82} 
	// 				};

	int arr[4][2] = {
						{1, 2}, 
						{3, 4},
						{5, 6},
						{7, 10}
	};

	int size = sizeof(arr)/sizeof(arr[0][0]); 		// Size of total Array!
	int rows = sizeof(arr)/sizeof(arr[0]);			// Size of rows
	int columns = sizeof(arr[0])/sizeof(arr[0][0]);	// Size of columns
	cout << size << " " << rows << " " << columns << "\n" ;

	int * resArr = new int[rows*columns];

	// mergeArray(*arr, resArr, rows, columns);

	int a = 0, b = 0, c = 0, d = 0;
	int count = 0;
	int x[4];
	int resArrCounter = 0;

	while( a < columns || b < columns || c < columns || d < columns ) {

		x[0] = arr[0][a];
		x[1] = arr[1][b];
		x[2] = arr[2][c];
		x[3] = arr[3][d];
		int temp2;


		int minX = INT_MAX;

		for(int i = 0; i < 4; i++ ) {
			if(minX > x[i]) {
				minX = x[i];
				temp2 = i;
			}
		}

		if( minX == x[0]) {
			resArr[resArrCounter] = minX;
			resArrCounter++;
			a++;
		}
		else if( minX == x[1]) {
			resArr[resArrCounter] = minX;
			resArrCounter++;
			b++;
		}
		else if( minX == x[2]) {
			resArr[resArrCounter] = minX;
			resArrCounter++;
			c++;
		}
		else if( minX == x[3]) {
			resArr[resArrCounter] = minX;
			resArrCounter++;
			d++;
		}



		// if( arr[0][a] < arr[1][b] && arr[0][a] < arr[2][c] && arr[0][a] < arr[3][d] ) {
		// 	resArr[count] = arr[0][a];
		// 	a++;
		// 	count++;

		// }
		// else if( arr[1][b] < arr[0][a] && arr[1][b] < arr[2][c] && arr[1][b] < arr[3][d] ) {
		// 	resArr[count] = arr[1][b];
		// 	b++;
		// 	count++;			
		// }
		// else if( arr[2][c] < arr[0][a] && arr[2][c] < arr[1][b] && arr[2][c] < arr[3][d] ) {
		// 	resArr[count] = arr[2][c];
		// 	c++;
		// 	count++;
		// }
		// else if( arr[3][d] < arr[0][a] && arr[3][d] < arr[1][b] && arr[3][d] < arr[2][c] ) {
		// 	resArr[count] = arr[3][d];
		// 	d++;
		// 	count++;
		// }
	}

	for (int i = 0; i < resArrCounter; ++i) {
		cout << resArr[i] << " ";
	}
	cout << "\n";

	delete [] resArr;

    return 0;
}
