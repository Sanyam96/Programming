// Pattern 2
/*
1
1 2
1 2 3
1 2 3 4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		int counter = 1;
		for (int j = 0; j <= i; ++j)
		{
			/* code */
			cout << counter << " ";
			counter++;
		}
		cout << endl;
	}
    return 0;
}
