// CelsiusToFahrenheit
#include <bits/stdc++.h>
using namespace std;

int main() {

	double fahrenheit;
	double celsius;

	cout << "Enter temperature in Celsius : ";
	cin >> celsius;

	fahrenheit = (celsius * 9.0) / 5.0 + 32;
	
	cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;

    return 0;
}
