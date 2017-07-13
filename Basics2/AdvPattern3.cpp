// AdvPattern3
/*
input for 4 

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
	int spaces = 0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < spaces; ++j)
		{
			/* code */
			cout << " ";
		}
		for (int j = 0; j <= i; ++j)
		{
			/* code */
			cout << "*" << " ";
		}
		spaces++;
		cout << "\n";
	}
	spaces--;
	for (int i = n-1; i > 0; i-- )
	{
		/* code */
		spaces--;
		for (int j = spaces; j > 0; j--)
		{
			/* code */
			cout << " ";
		}
		for (int j = i; j > 0; j--)
		{
			/* code */
			cout << "*" << " ";
		}
		cout << endl;
	}
    return 0;
}
