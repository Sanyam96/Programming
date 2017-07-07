// Average of input Numbers
#include <bits/stdc++.h>
using namespace std;

int main() {

	int count = 0;
	cin >> count;
	double sum = 0;
	for (double i = 1; i <= count; ++i)
	{
		/* code */
		double n;
		cin >> n;
		sum += n;
		cout << "Average of Numbers after each input : " << (sum/i) << "\n";
	}
    return 0;

}
