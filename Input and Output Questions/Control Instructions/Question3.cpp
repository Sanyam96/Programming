// Find the output of the following program and find out error if any

#include <bits/stdc++.h>
using namespace std;

int main() {

	int a = 500, b = 100, c;
	if( !a >= 400) {
		b = 300;
	}
	c = 200;
	cout << a << " " << b << " " << c << endl;
	cout << !a << endl;
	cout << (!a >= 400) << endl;

	if( !a >= 0) {
		b = 300;
	}
	c = 2200;
	cout << a << " " << b << " " << c << endl;

	if( !a >= -1) {
		b = 3100;
	}
	c = 1200;
	cout << a << " " << b << " " << c << endl;
    return 0;
}


// ----------------------------------------------------------------------------------
/*

	Output : 
		500 100 200
		0
		0
		500 300 2200
		500 3100 1200

*/