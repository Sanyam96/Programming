// Decimal To Binary

#include <bits/stdc++.h>
using namespace std;

int main() {

	int num;
	cin >> num;

	int arr[50];
	int counter = -1;

	int temp = num;
	while( temp > 0) {
		// cout << temp % 2;
		counter++;
		arr[counter] = (temp % 2);
		temp /= 2;
	}
	for (int i = counter; i >= 0; i--)
	{
		/* code */
		cout << arr[i] << "";
	}
	cout << endl;
    return 0;
}
