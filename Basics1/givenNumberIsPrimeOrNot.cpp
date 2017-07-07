// to check given number is prime or not
#include <bits/stdc++.h>
using namespace std;

int main() {

	int number;
	cin >> number;
	bool isPrime = true;

	for (int i = 2; i < number/2; ++i)
	{
		/* code */
		if( number % i == 0){
			isPrime = false;
			break;
		}
	}
	if(isPrime) {
		cout << "A prime Number :) \n";
	}
	else {
		cout << "Not a primme Number :( \n";	
	}

	return 0;
}


/*
int main() {

	int number;
	cin >> number;

	for (int i = 2; i < number/2; ++i)
	{
		// code
		if( number % i == 0){
			cout << "Number is not prime  \n"; 
			return 0;
		}
	}
	cout << "number is prime :) \n";
    return 0;
}
*/