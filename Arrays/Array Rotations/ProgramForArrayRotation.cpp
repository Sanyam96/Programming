// Program for array rotation
/*
function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
Input : [1, 2, 3, 4, 5, 6, 7]
d = 2
Output : [3, 4, 5, 6, 7, 1, 2]
*/

#include <bits/stdc++.h>
using namespace std;

// Approach 3
// Juggling Algorithm ==>> Time complexity: O(n) , Auxiliary Space: O(1)
// Link: http://www.geeksforgeeks.org/array-rotation/
int gcd(int a, int b)
{
   if( b == 0)
     return a;
   else
     return gcd(b, a%b);
}

int main() {

	int n = 7;
	int d = 2;
	int arr[] = {1, 2, 3, 4, 5, 6, 7};

	int i, j, k, temp;
	for (i = 0; i < gcd(d, n); i++)
	{
	/* move i-th values of blocks */
		temp = arr[i];
		j = i;
		while(1)
		{
			k = j + d;
			if (k >= n)
				k = k - n;
			if (k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}

	cout << "Now Array is : ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}


/*
// Approach 2
// Rotate one by one ==>> Time complexity: O(n*d) , Auxiliary Space: O(1)
int main() {

	int n = 7;
	int d = 2;
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int tempVariable;

	int temp = arr[0];
	for (int i = 0; i < d; ++i)
	{
		int tempVariable = arr[0];
		for (int j = 0; j < n-1; ++j)
		{
			arr[j] = arr[j+1];
		}
		arr[n-1] = tempVariable;
	}
	cout << "Now Array is : ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}
*/

/*
// Approach 1
// By temp Array ==>>  Time complexity O(n) , Auxiliary Space: O(d)
int main() {

	int n = 7;
	int arr[]  = {1, 2, 3, 4, 5, 6, 7};
	int d = 2;
	int temp[2];

	for (int i = 0; i < d; ++i)
	{
		temp[i] = arr[i];
	}

	int j = 0;
	for (int i = d; i < n; ++i)
	{
		arr[j] = arr[i];
		j++;
	}

	int k = 0;
	for (int i = j; i < n; ++i)
	{
		arr[i] = temp[k];
		k++;
	}

	cout << "Now Array is : ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
    return 0;
}
*/