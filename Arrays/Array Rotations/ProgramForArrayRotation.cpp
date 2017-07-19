// Program for array rotation
/*
function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
	d = 2, n = 7
	Input : [1, 2, 3, 4, 5, 6, 7]
	Output : [3, 4, 5, 6, 7, 1, 2]
*/

#include <bits/stdc++.h>
using namespace std;


// Approach 5
// Block Swap Implementation ==>> Recursive approach  :: Time Complexity: O(n)
// Reference Link: http://www.geeksforgeeks.org/block-swap-algorithm-for-array-rotation/
void printArray(int arr[], int size);
void swap(int arr[], int fi, int si, int d);
 
void leftRotate(int arr[], int d, int n)
{  
  if(d == 0 || d == n)
    return;
     
  if( n-d == d)
  {
    swap(arr, 0, n-d, d);   
    return;
  }  

  if(d < n-d)
  {  
    swap(arr, 0, n-d, d);
    leftRotate(arr, d, n-d);    
  }    
  else             
  {
    swap(arr, 0, d, n-d);
    leftRotate(arr+n-d, 2*d-n, d); // This is tricky
  }
}
 
void printArray(int arr[], int size)
{
  int i;
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	
	printf("\n ");
} 

void swap(int arr[], int fi, int si, int d)
{
   int i, temp;
   for( i = 0; i < d; i++)   
   {
     temp = arr[fi + i];
     arr[fi + i] = arr[si + i];
     arr[si + i] = temp;
   }     
}     
 
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   leftRotate(arr, 2, 7);
   printArray(arr, 7);
   return 0;
}


/*
// Approach 4
// The Reversal Algorithm ==>> Time Complexity: O(n)
// Reference Link: http://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/

void printArray(int arr[], int size);

void reverseArray(int arr[], int start, int end);
 
void leftRotate(int arr[], int d, int n)
{
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
 
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    leftRotate(arr, d, n);
    printArray(arr, n);
    cout << endl;
    return 0;
}
*/

/*
// Approach 3
// Juggling Algorithm ==>> Time complexity: O(n) , Auxiliary Space: O(1)
// Reference Link: http://www.geeksforgeeks.org/array-rotation/

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
	// move i-th values of blocks 
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
*/

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