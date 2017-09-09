// Remove all the vowels from a string
/*
	Input: "Where there is a will, there is a way"
	Output: "Whr thr s  will, thr s  wy"	
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
	
	string s;
	cin >> s;

	int lengthOfString;
	int i = 0;
	while( s[i] != '\0') {
		i++;
		lengthOfString++;
	}
	// cout << lengthOfString << endl;

	for (int i = 0; i < lengthOfString; ++i) {
		if( s[i] == 'A' || s[i] == 'a' || 
			s[i] == 'E' || s[i] == 'e' || 
			s[i] == 'I' || s[i] == 'i' || 
			s[i] == 'O' || s[i] == 'o' || 
			s[i] == 'U' || s[i] == 'u' ) {

			for(int j = i; j < lengthOfString; j++) {
				s[j] = s[j+1];
				lengthOfString--;
			}
		}
	}

	for (int i = 0; i < lengthOfString; ++i) {
		cout << s[i] << "";
	}
	cout << endl;
	
	return 0;
}