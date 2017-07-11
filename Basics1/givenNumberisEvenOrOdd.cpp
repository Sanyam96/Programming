// givenNumberisEvenOrOdd

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;


	if ( n == 0 ) {
		cout << n << " is neither Even or Odd Number" << "\n";
	}
	else if( n % 2 == 0) {
		cout << n << " is Even Number" << "\n";
	}
	else {
		cout << n << " is Odd Number" << "\n";
	}

    return 0;
}
