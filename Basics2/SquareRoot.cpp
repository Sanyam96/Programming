// Square Root of a number

#include <bits/stdc++.h>
using namespace std;

bool double_equals(double a, double b, double epsilon = 0.000001)
{
    return abs(a - b) < epsilon;
}

int main() {

	int number;
	cin >> number;

	double answer = 0;
	while( (answer*answer) <= number ) {
		answer = answer + 1;
	}
	answer = answer - 1;
	cout << answer << "\n";

	int i = 1;
	double increment = 1;
	int decimalPlace;
	// cin >> decimalPlace;
	decimalPlace = 3;

	while( i <= decimalPlace ) {
		increment = increment * 0.1;
		i++;
	}
	// cout << increment << "\n";
	answer = answer + increment;

	while( double_equals(answer*answer, number) ) {
		answer *= 0.1;
	}
	cout << answer << endl;	    

    return 0;
}
// https://codereview.stackexchange.com/questions/82958/compare-two-doubles-to-n-decimal-places