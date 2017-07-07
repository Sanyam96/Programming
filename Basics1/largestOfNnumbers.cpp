// Largest of N Numbers
#include <bits/stdc++.h>
using namespace std;

int main() {

	int count = 0;
	cin >> count;
	int max = INT_MIN;

	for (int i = 0; i < count; ++i)
	{	
		/* code */
		int number;
		cin >> number;

		if( max < number ) {
			max = number;
		}
	}

	cout << "Max Number is : " << max << "\n";
    return 0;
}
