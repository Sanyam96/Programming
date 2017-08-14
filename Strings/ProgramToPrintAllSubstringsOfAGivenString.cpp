// Program to print all substrings of a given string
/*

Given a string as an input. 
We need to write a program that will print all non-empty substrings of that given string.

Examples:

Input :  abcd
Output :  a 
          b
          c
          d
          ab
          bc
          cd
          abc
          bcd
          abcd
*/

#include <bits/stdc++.h>
using namespace std;

/*
void subString(char str[], int n) {
    
    for (int len = 1; len <= n; len++) {    
        // Pick ending point
        for (int i = 0; i <= n - len; i++) {
            //  Print characters from current
            // starting point to current ending
            // point.  
            int j = i + len - 1;            
            for (int k = i; k <= j; k++) {
                cout << str[k];
            }
             
            cout << endl;
        }
    }
}
*/

void subString(char str[], int n) {
    int count = 1;

    while(count <= n) {
    
        for(int i = 0; i <= n-count; i++ ){
    
            for(int j = i; j < i+count; j++ ) {
                cout << str[j];
            }
    
            cout << endl;
        }
    
        count++;
    }

}

/*
// if order of Output doesn't matter 
// Time Complexity : O(n^2)
void subString(char str[], int n) {

        for (int i = 0; i <n; i++) {
	        string c = "";
	        c.append(1,str[i]);
            for (int k = i+1; k <= n; k++) {
                cout << c<<"\n";
                if(k<n)
                c.append(1,str[k]);
            }
        }
}
*/

int main() {

	char str[] = "abc";
    subString(str, strlen(str));
    return 0;
}
