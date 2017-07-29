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

	int *arr1 = new int(sizeArr1);
	int *arr2 = new int(sizeArr2);

	for (int i = 0; i < sizeArr1; ++i) {
		cin >> arr1[i];
	}

	for (int i = 0; i < sizeArr2; ++i) {
		cin >> arr2[i];
	}

	int sizeResultantArray = findMax(sizeArr1, sizeArr2) + 1;

	int *resArr = new int(sizeResultantArray);

	int carry = 0;
	int sum = 0;
	int a1 = sizeArr1 - 1;
	int a2 = sizeArr2 - 1;

	for (int i = 0; i < sizeResultantArray-1; ++i) {
		resArr[i] = 0;
	}

	for (int i = sizeResultantArray-1; (a1 >= 0 && a2 >= 0 && i >= 0); i--) {
		carry = 0;
		sum = arr1[a1] + arr2[a2];
		a1--;
		a2--;
		carry = sum / 10;
		resArr[i-1] += carry;
		resArr[i] += sum % 10;
	}

	for (int i = 0; i < sizeResultantArray; ++i) {
		cout << resArr[i] << " ";
	}
	cout << endl;

	delete [] arr1;
	delete [] arr2;
	delete [] resArr;

    return 0;
}
