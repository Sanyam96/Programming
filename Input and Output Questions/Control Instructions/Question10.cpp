// What is the output of the following program and also Point out the Error If Any

#include <bits/stdc++.h>
using namespace std;

int main() {

	int i = 0;
	for( i = 0; i <= 127; printf("%d\n", i++ ));
	cout << endl;

    return 0;
}


// ----------------------------------------------------------------------------------
/*

	Output :
			0
			1
			2
			3
			4
			5
			6
			.
			.
			.
			127

	Description : 
			semicolon after for loop!

*/