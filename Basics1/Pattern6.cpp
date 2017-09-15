// Pattern 6

/*

* * * * *
*		*
*		*
*		*
* * * * *

*/


#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	// cin >> n;
	n = 5;

	for( int i = 0; i < n; i++) {
		for( int j = 0; j < n; j++ ) {
			if( i == 0 || i == n-1) {
				cout << "* ";
			}
			else {
				if( j == 0 || j == n-1) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
		}
		cout << "\n";
	}
    return 0;
}
