// Sum of 2 Arrays 
/*
You are given two arrays. Find the sum of the two arrays and put the result in
another array. e.g. if you are given [1,2,4] and [4,5,6] the output should be [5,8,0].
*/

/*
Input : 
	Array1 : [2, 2, 2]
	Array2 : [3, 1, 7]

Output : 
	Resultant Array : [5, 3, 9] 

PS: Some inputs are tricky!! BEWARE!!

*/

#include <bits/stdc++.h>
using namespace std;

int findMax(int n1, int n2) {
	if( n1 > n2 ) {
		return n1;
	}
	else {
		return n2;
	}
}

int main() {

	int sizeArr1, sizeArr2;
	cout << "Enter size of Array1 and Array2" << endl;
	cin >> sizeArr1 >> sizeArr2;

	int biggerArrSize, smallerArrSize;
	biggerArrSize = findMax(sizeArr1, sizeArr2);
	
	if(biggerArrSize == sizeArr1) {
		biggerArrSize = sizeArr1;
		smallerArrSize = sizeArr2;

	}
	else {
		biggerArrSize = sizeArr2;
		smallerArrSize = sizeArr1;
	}

	int *arr1 = new int(smallerArrSize);	// smaller Array if both are not of same size
	int *arr2 = new int(biggerArrSize);		// bigger Array if both are not of same size

	for (int i = 0; i < smallerArrSize; ++i) {
		cin >> arr1[i];
	}
	for (int i = 0; i < biggerArrSize; ++i) {
		cin >> arr2[i];
	}

	int sizeResultantArray = findMax(sizeArr1, sizeArr2) + 1;
	int *resArr = new int(sizeResultantArray);

	int carry = 0;
	int sum = 0;
	int a1 = smallerArrSize - 1;
	int a2 = biggerArrSize - 1;
	int a3 = sizeResultantArray - 1;

	for (int i = 0; i < sizeResultantArray-1; ++i) {
		resArr[i] = 0;
	}

	for (int i = a1; i >= 0 ; i--) {
		sum = carry + arr1[i] + arr2[a2];
		carry = sum / 10;
		resArr[a3] = sum % 10;
		a2--;
		a3--;
	}
	for (int i = a2; i >= 0; i--) {
		sum = carry + arr2[i];
		carry = sum/10;
		resArr[a3] = sum%10;
		a3--;
	}
	resArr[0] += carry;

	for (int i = 0; i < sizeResultantArray; ++i) {
		cout << resArr[i] << " ";
	}
	cout << endl;

	delete [] arr1;
	delete [] arr2;
	delete [] resArr;

    return 0;
}
