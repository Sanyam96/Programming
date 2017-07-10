// Pattern 1
/*
1
2 3
4 5 6
7 8 9 10
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int counter = 1;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j <= i; ++j)
		{
			/* code */
			cout << counter << " ";
			counter++;
		}
		cout << "\n";
	}

    return 0;
}
