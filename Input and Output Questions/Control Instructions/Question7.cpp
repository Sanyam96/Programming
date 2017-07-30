// What is the output of the following program and also Point out the Error If Any

#include <bits/stdc++.h>
using namespace std;

int main() {

	int x = 10, y = 20;

	if( !(!x) && x ) {
		cout << "x = " << x << "\n";
	} 
	else {
		cout << "y = " << y << "\n";
	}

    return 0;
}


// ----------------------------------------------------------------------------------
/*

	Output :
			x = 10

	Description : 
			!x = false
			!(!x) is true
			true && true = true

*/