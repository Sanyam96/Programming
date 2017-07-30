// What is the output of the following  program and also Point out the Error If Any

#include <bits/stdc++.h>
using namespace std;

int main() {

	int i = 1;

	for( ; ; ) {
		cout << i++ << "\n";
		if( i > 5 ) {
			break;
		}
	}

    return 0;
}


// ----------------------------------------------------------------------------------
/*

	Output :
			1
			2
			3
			4
			5		

*/