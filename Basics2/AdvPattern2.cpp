// Advanced Pattern2
/*
input for 4 rows

*
* *
* * *
* * * *
* * *
* *
*

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j <= i; ++j)
		{
			/* code */
			cout << "*" << " ";
		}
		cout << "\n";
	}
	for (int i = n-1; i > 0; i-- )
	{
		/* code */
		for (int j = i; j > 0; j--)
		{
			/* code */
			cout << "*" << " ";
		}
		cout << endl;
	}
    return 0;
}
