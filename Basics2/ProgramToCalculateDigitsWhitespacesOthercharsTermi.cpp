// Program To Calculate Digits Whitespaces Otherchars Terminated By DollarSign $

#include <bits/stdc++.h>
using namespace std;

int main() {

	char currentCharacters;
	int digit = 0;
	int characters = 0;
	int spaces = 0;
	// cin.get(currentCharacters);
	currentCharacters = cin.get();
	while( currentCharacters != '$') {

		if( currentCharacters >= 0 && currentCharacters <= 9) {
			digit++;
			currentCharacters = cin.get();
		}
		else if( currentCharacters >= 'a' && currentCharacters <= 'z') {
			characters++;
			currentCharacters = cin.get();
		}
		else if( currentCharacters >= 'A' && currentCharacters <= 'Z') {
			characters++;
			currentCharacters = cin.get();
		}
		else if (currentCharacters == ' ' || currentCharacters == '\t' || currentCharacters == '\n') {
			spaces++;
			currentCharacters = cin.get();
		}
	}
	cout << "Digits : " << digit << "\n";
	cout << "Characters : " << characters << "\n";
	cout << "Spaces : " << spaces << "\n"; 
    return 0;
}


/*
Reference : 
	std::string a;
	std::cin >> a;              // Read single word
	std::getline(std::cin, a);  // Read whole line

	When you call cin.get() after that, it will grab and discard the newline character, allowing the rest of your code to properly get the input.

	http://minich.com/education/wyo/cplusplus/cplusplusch10/getfunction.htm

	https://www.quora.com/What-is-difference-between-cin-c-and-c-cin-get-in-C++#

	// related to the input buffer and istream!!




	//---------------------------------------------------------------------------------------------------
	cin.get( ) does just what it says - it gets a character from the input stream. 
	Any character, including whitespace (blank, tab, newline). You can use it two ways, for this simple purpose:

	char ch;
	cin.get( ch );
	//or
	ch = cin.get( );
	There are other ways to use the get( ) function (in VC++ 2003, 6 templates are listed)

	This differs from cin >> ch in that this method skips over whitespace, get( ) does not. 
	Leaving whitespace characters in the input stream can trip you up if you don't pay attention.

	Run this little sample. At each prompt, press a single character, then the enter key. 
	You don't get to enter a second character, because the newline after your first input is still waiting to be processed. 
	The second get( ) grabs that. Now uncomment the ignore( ) line, 
	this will eat up the newline so that your second get( ) can do something useful.

	#include <iostream>
	using namespace std;
	int main( )
	{
		char ch;
		cout << "Enter a character (just one): ";
		cin.get( ch );
		cout << ch << endl;
		cout << "Enter another single character: ";
		//cin.ignore(1);
		ch = cin.get( );
		cout << ch << endl;
		return 0;
	}
	ignore( ) takes zero, one or two arguments. F
	irst is a maximum number of characters (to include whitespace) that it will ignore (throw away). S
	econd argument is a delimiter - 
		it will stop at that character if it encounters it before the maximum number of characters is reached. 
	If you give no arguments, the default is 1 char or newline, whichever is first. 
	You may give only a number argument, in which case the default delimiter is eof( ).

	//---------------------------------------------------------------------------------------------------



*/
