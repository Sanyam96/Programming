// What is the output of the following  program and also Point out the Error If Any

#include <bits/stdc++.h>
using namespace std;

int main() {

	int i = 1;

	while() {
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
			Error!!!!!
				error: expected primary-expression before ‘)’ token
  				while(  ) {
        			  ^
			
	Description : 
			There should be a condition in the while loop ;)

*/