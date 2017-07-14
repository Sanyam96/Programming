// FibonacciSeries
#include <bits/stdc++.h>
using namespace std;

int main() {

	int firstNumber = 0;
	int secondNumber = 1;

	int n;
	cin >> n;


	cout << firstNumber << " " << secondNumber << " "	;
	for (int i = 0; i < n-2; ++i)
	{
		/* code */
		int temp;
		temp = firstNumber + secondNumber;
		cout << temp << " ";
		firstNumber = secondNumber;
		secondNumber = temp;
	}
    return 0;
}
