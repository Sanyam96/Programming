// givenNumberisDivisiblefrom3orNot

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	if(n == 0) {
		cout << "Number is 0 :/ BAD INPUT" << " remainder is: " << (n % 3) << "\n";
	}
	else if( n % 3 == 0) {
		cout << n << " is divisible by 3 and remainder is: " << (n % 3) << "\n"; 
	}
	else if( n % 3 == 1) {
		cout << n << " is not divisible by 3 and remainder is: " << (n % 3) << "\n";
	} 
	else {
		cout << n << " is not divisible by 3 and remainder is: " << (n % 3) << "\n";
	}

    return 0;
}
