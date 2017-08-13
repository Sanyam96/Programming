// Program to Check if a Given String is Palindrome
/*

Given a string, write a c function to check if it is palindrome or not. 
A string is said to be palindrome if reverse of the string is same as string. 
For example, “abba” is palindrome, but “abbc” is not palindrome.

*/


#include <bits/stdc++.h>
using namespace std;

void isPalindrome(char str[]) {
	int l = 0;
	int h = strlen(str) - 1;

	while( h > l ) {
		if (str[l++] != str[h--]) {
			cout << str << " is Not Palindrome\n";
            // printf("%s is Not Palindromen", str);
            return;
        }
	}
	cout << str << " is Palindrome\n";
	// printf("%s is palindromen", str);
}

int main() {

	isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}
