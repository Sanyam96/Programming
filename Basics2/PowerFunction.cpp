// Power Function to calculate x^n

#include <bits/stdc++.h>
using namespace std;

int main() {

	long x;
	long n;
	cin >> x >> n;

	long power = 1;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		power = power * x;
	}
	cout << power << endl;
    return 0;
}
