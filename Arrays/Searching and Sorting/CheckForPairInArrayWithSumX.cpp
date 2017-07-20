// Given an array A[] and a number x, check for pair in A[] with sum as x

#include <bits/stdc++.h>
using namespace std;

// Approach 2
// Using Hash Map
// This method works in O(n) time if range of numbers is known.
#define MAX 100000
 
void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp;
  bool binMap[MAX] = {0}; // initialize hash map as 0
 
  for (i = 0; i < arr_size; i++)
  {
      temp = sum - arr[i];
      if (temp >= 0 && binMap[temp] == 1)
         printf("Pair with given sum %d is (%d, %d) n", 
                 sum, arr[i], temp);
      binMap[arr[i]] = 1;
  }
}
 
int main()
{
    int A[] = {1, 4, 45, 6, 10, 8};
    int n = 16;
    int arr_size = sizeof(A)/sizeof(A[0]);
 
    printPairs(A, arr_size, n);
 
    getchar();
    return 0;
}




/*

// Approach 1
// Using Sorting
// Time Space : If we use Merge Sort or Heap Sort then (-)(nlogn) in worst case. If we use Quick Sort then O(n^2) in worst case.
// Auxiliary Space : Again, depends on sorting algorithm. For example auxiliary space is O(n) for merge sort and O(1) for Heap Sort.
# define bool int

void quickSort(int *, int, int);
 
bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
    int l, r;
 
    // Sort the elements 
    quickSort(A, 0, arr_size-1);
 
    // Now look for the two candidates in the sorted array
    l = 0;
    r = arr_size-1; 
    while (l < r)
    {
         if(A[l] + A[r] == sum)
              return 1; 
         else if(A[l] + A[r] < sum)
              l++;
         else // A[i] + A[j] > sum
              r--;
    }    
    return 0;
}
 
int main()
{
    int A[] = {1, 4, 45, 6, 10, -8};
    int n = 16;
    int arr_size = 6;
    
    if( hasArrayTwoCandidates(A, arr_size, n))
        printf("Array has two elements with sum 16");
    else
        printf("Array doesn't have two elements with sum 16 ");
 
 	printf("\n");
    return 0;
}
 
void exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}
 
int partition(int A[], int si, int ei)
{
    int x = A[ei];
    int i = (si - 1);
    int j;
 
    for (j = si; j <= ei - 1; j++)
    {
        if(A[j] <= x)
        {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange (&A[i + 1], &A[ei]);
    return (i + 1);
}
 
//  Implementation of Quick Sort
// A[] --> Array to be sorted
// si  --> Starting index
// ei  --> Ending index

void quickSort(int A[], int si, int ei)
{
    int pi;    // Partitioning index
    if(si < ei)
    {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}
*/