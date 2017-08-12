// Rearrange positive and negative numbers in O(n) time and O(1) extra space
/*

All the positive integers should be arranged in descending order and
all the negative integers should be arranged in ascending order
and order of positive and negative numbers should be alternative

Input array is [-1, 2, -3, 4, 5, 6, -7, 8, 9], then the 
Output should be [9, -7, 8, -3, 5, -1, 2, 4, 6]


*/

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b);
 
void rearrange( int arr[], int n)
{
    int i = -1;
    for( int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
 
    int pos = i+1, neg = 0;
 
    while( pos < n && neg < pos && arr[neg] < 0)
    {
        swap( &arr[neg], &arr[pos]);
        pos++;
        neg += 2;
    }
}
 
void swap( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%4d ", arr[i]);
}
 
int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    printf("\n");
    return 0;
}