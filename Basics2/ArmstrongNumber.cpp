// To Check input number is Armstrong Number or not
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[20];
	int i = 0;

	int temp = n;
	int count = 0;
	while(temp > 0 ) {
	    /* code */
	    temp /= 10;
	    count++;
	}
	temp = n;
	for (int i = count-1; i >= 0; i--)
	{
		/* code */
		arr[i] = temp % 10;
		temp /= 10;
	}
	int sum = 0;
	for (int i = count-1; i >= 0; i--)
	{
		/* code */
		sum += pow(arr[i], count);
	}
	if( sum == n) {
		cout << "yes\n";
	}
	else {
		cout << "No\n";
	}

    return 0;
}

/*
int main()
{
    int number;
    int originalNumber;
    int remainder;
    int result = 0;
    int n = 0 ;

    cin >> number;
	originalNumber = number;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
    	cout << number << " is an Armstrong Number\n";
    else
    	cout << number << " is not an Armstrong Number\n"; 
        
    return 0;
}
*/
