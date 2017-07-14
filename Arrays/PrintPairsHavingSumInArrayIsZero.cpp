// Print Pairs Having Sum In Array Is Zero

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[50];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}


	for (int j = 0; j < n-1; ++j)
	{
		/* code */
		for (int i = j+1; i < n; ++i)
		{
			/* code */
			if( arr[j] + arr[i] == 0) {
				cout << "Pairs : " << arr[j] << " : " << arr[i] << "\n";
			}
		}
	}
	cout << endl;
    return 0;
}
