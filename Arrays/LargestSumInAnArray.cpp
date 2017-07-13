// Largest Sum In An Array
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[50];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}
	int max = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if (max < arr[i])
		{
			/* code */
			max = arr[i];
		}
	}
	cout << "Largest in Array is: " << max << endl;
    return 0;
}
