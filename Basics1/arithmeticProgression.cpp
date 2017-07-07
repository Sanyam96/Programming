Arithmetic Progression
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, d;
	cin >> a >> d;

	for (int i = 0; i < 10; ++i) {
		/* code */
		cout << a << " ";
		a = a + d;
	}
	cout << "\n";
    return 0;
}
