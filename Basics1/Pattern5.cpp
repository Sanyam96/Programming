// Pattern5
/*

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int rows;
	cin >> rows;

	int numSpacesRemaining;
	int i;

	while( i <= rows) {
		numSpacesRemaining = rows - i;
		while( numSpacesRemaining > 0 ) {
			cout << " ";
			numSpacesRemaining -= 1;
		}
		int val = 1;
		while( val <= 2 * i - 1) {
			cout << val;
			val += 1;
		}
		cout << endl;
		i += 1;
	}

    return 0;
}
