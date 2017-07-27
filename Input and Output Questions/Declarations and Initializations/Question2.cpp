// What will be the output of the following program

#include <bits/stdc++.h>
using namespace std;

int main() {

	int x = 40;
	{
		int x = 20;
		printf("%d\n", x );
	}
	printf("%d\n", x );
    return 0;
}



// -----------------------------------------------------------------
/*
	Output: 

	20
	40

	// In case of conflict between a two local variables
	// Local variable which is more Local variable gets a priority. (that is more nearer to the point of usage)
*/