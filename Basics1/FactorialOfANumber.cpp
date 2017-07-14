// Factorial Of A Number
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int fact = 1;

	for (int i = 1; i <= n; ++i)
	{
		/* code */
		fact = fact * i;
	}
	cout << fact << "\n";
    return 0;
}
