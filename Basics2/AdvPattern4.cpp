// Advanced Pattern 4
/*
input on 5

1               1
1 2           2 1
1 2 3       3 2 1
1 2 3 4   4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int spaces = 0;
	int counter = 1;
	int columns = ( ( 2 * n ) - 1 );

	for (int i = 1; i <= n; ++i)
	{
		/* code */
		counter = 1;
		for (int j = 1; j <= i; ++j)
		{
			/* code */
			cout << counter << " ";
			counter++;
		}
		for (int j = 1; j <= (columns - (2*i)); ++j)
		{
			/* code */
			cout << "  ";
		}
		counter--;
		while(counter > 0) {
		    /* code */
		    if (n == counter)
		    {
		    	/* code */
		    	counter--;
		    }
		    cout << counter << " ";
		    counter--;
		}
		cout << endl;
	}

    return 0;
}
