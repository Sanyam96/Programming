// What is the output of the following  program and also Point out the Error If Any

#include <bits/stdc++.h>
using namespace std;

int main() {

	int i = 1;
	switch(i) {

		cout << "Hello\n";

		case 1 :
			cout << "Hi\n";
			break;

		case 2 :
			cout << "Bye\n";
			break;
	}

	i = 3;
	switch(i) {

		cout << "Hello\n";

		case 1 :
			cout << "Hi\n";
			break;

		case 2 :
			cout << "Bye\n";
			break;

		default :	
			cout << "Sam\n";
	}

	i = 2;
	switch(i) {

		cout << "Hello\n";

		case 1 :
			cout << "Hi\n";
			break;

		case 2 :
			cout << "Bye\n";
			break;

		default :
			cout << "Sam\n";
	}
    return 0;
}

// ----------------------------------------------------------------------------------
/*

	Output : 
		Hi
		Bye

	Description :
		Only i = 1 and i = 2 cases are executed i.e., first swtich and last switch will produce the output

		switch statement or block only searched for the defined cases
			if found then do the work
			else goto to the default statement block for execution!

*/