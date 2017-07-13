// Advanced Pattern1
/*

5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int temp = n;
	for (int i = n; i >= 1; i--)
	{
		/* code */
		for (int j = n; j >= 1; j--)
		{
			/* code */
			if( j >= i) {
				cout << j << " ";
			}
			else {
				cout << i << " ";
			}
		}
		cout << endl;
	}
    return 0;
}
