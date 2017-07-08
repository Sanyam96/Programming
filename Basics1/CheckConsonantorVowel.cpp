// Program to check input is vowel or Consonant
#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel;
    int isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel) {
        cout << c << " is a vowel.\n";
    }
    else {
        cout << c << " is a consonant.\n";
    }

    return 0;
}