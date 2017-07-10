// Reverse A Number

#include <bits/stdc++.h>
using namespace std;

// Method 2
int main(int argc, char const *argv[])
{
	/* code */
	int number;
	cin >> number;

	int reverse = 0;
	int temp = number;
	int lastDigit;

	while( temp > 0 ) {
		lastDigit = temp % 10;
		reverse = (reverse * 10) + lastDigit;
		temp /= 10;
	}
	cout << reverse << "\n";
	return 0;
}

/*
// Method 1
int main() {

	int number;
	cin >> number;

	int temp = number;
	
	while( temp > 0 ) {
		cout << (temp % 10) << "";
		temp /= 10;
	}
    return 0;
}
*/