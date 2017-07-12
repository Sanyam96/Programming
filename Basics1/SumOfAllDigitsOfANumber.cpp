// Sum Of All Digits Of A Number

#include <bits/stdc++.h>
using namespace std;

int main() {

	int number;
	cin >> number;

	int sum = 0;
	int temp = number;

	while( temp > 0) {
		int lastDigit = temp % 10;
		temp /= 10;
		sum += lastDigit; 
	}
	cout << sum << endl;

    return 0;
}
