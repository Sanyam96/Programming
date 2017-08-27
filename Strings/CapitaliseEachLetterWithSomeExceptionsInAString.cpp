// Capitalise Each Letter With Some Exceptions In A String
/*
Input: 
    String:     "where there is a will, there is a way"
    Exceptions: {"is", "a"}

Output:
    String:     "Where There is a Will, There is a Way" 
*/
    
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main() {

	string s = "where there is a will, there is a way";
	string exp[] = {"is", "a"};
	// Output String = "Where There is a Will, There is a Way";
    int len = s.length();
    int size3 = sizeof(exp)/sizeof(exp[0]);

    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    char newString[MAX][MAX];

    // break words into 2d array
    for (int i = 0; s[i] != '\0'; ++i) {
    	if(s[i] == ' ') {
    		count++;
    		newString[j][k] = '\0';
    		k = 0;
    		j++;
    	}
    	else {
    		newString[j][k] = s[i];
    		k++;
    	}
    }
    count += 1;	// total number of words in the string

    // Exceptions first letter is capitalize
    for( int q = 0; q < size3; q++ ) {
    	for( int y = 0; y <= j; y++) {
    		if( strcmp( &exp[q][0], &newString[y][0]) == 0) {
    			newString[y][0] = newString[y][0] - 32;	
    		}
    	}
    }

    // All letters are Capitalize and exception letters are small
	for( int y = 0; y <= j; y++) {
		if( newString[y][0] >= 'a' && newString[y][0] <= 'z' ) {
			newString[y][0] = newString[y][0] - 32;	
		}
		else {
			newString[y][0] = newString[y][0] + 32;	
		}
	}

    for (int i = 0; i <= j; ++i) {
    	for (int q = 0; newString[i][q] != '\0'; q++) {
    		cout << newString[i][q];
    	}
    	cout << " ";
    }
    cout << endl;
    
    return 0;
}
