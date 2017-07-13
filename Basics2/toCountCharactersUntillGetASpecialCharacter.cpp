// To Count Characters Untill Get A Special Character '$'
#include <bits/stdc++.h>
using namespace std;

int main() {

	char currentCharacters;
	int count = 0;
	cin >> currentCharacters;
	while( currentCharacters != '$') {
		count++;
		cin >> currentCharacters;
	}

	cout << count << endl;

    return 0;
}
