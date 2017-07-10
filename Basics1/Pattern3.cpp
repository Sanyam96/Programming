// Pattern 3
/*
      1
    2 3
  3 4 5
4 5 6 7 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int rows;
	cin >> rows;

	for (int i = 0; i < rows; ++i)
	{
		int temp = i + 1;
		/* code */
		for (int j = 0; j < rows-i-1; ++j)
		{
			/* code */
			cout << "  ";
		}
		for (int j = 0; j <= i; ++j)
		{
			/* code */
			cout << temp << " ";
			temp++;
		}
		cout << endl;
	}
    return 0;
}
