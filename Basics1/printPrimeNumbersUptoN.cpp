// To print prime numbers upto input N
#include <bits/stdc++.h>
using namespace std;

int main() {

	int count;
	cin >> count;

	for (int i = 2; i <= count; ++i)
	{
		/* code */
		bool prime = true;	
		for (int j = 2; j*j <= i; ++j)
		{
			/* code */
			if (i % j == 0)
			{
				/* code */
				prime = false;
				break;
			}
		}
		if (prime)
		{
			/* code */
			cout << i << " " << "\n";
		}
	}
    return 0;
}
