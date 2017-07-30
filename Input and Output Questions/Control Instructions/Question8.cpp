// What is the output of the following program and also Point out the Error If Any

#include <bits/stdc++.h>
using namespace std;

int main() {

	void fun();
	int i = 1;
	while( i <= 5 ) {
		cout << i <<"\n";
		if ( i > 2 ){
			goto here;
		}
	}
    return 0;

}
void fun() {
	here :
		cout << "Goto works!\n";
}


// ----------------------------------------------------------------------------------
/*

	Output :
			error: label ‘here’ used but not defined
			    goto here;
			         ^


	Description : 
			goto cannot take control to a function other than the one in which it is performing or used
			or
			goto cannot perform a non-local jump
*/