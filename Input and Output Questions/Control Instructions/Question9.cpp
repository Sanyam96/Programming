// What is the output of the following program and How many times the while loop will get executed in the program
// also Point out the Error If Any
// considering that short int is 2 byte wide

#include <bits/stdc++.h>
using namespace std;

int main() {

	int j = 1;
	while( j <= 255 ); 
	{
		printf("%c %d \n", j, j );
		j++;
	}
    return 0;
}

// ----------------------------------------------------------------------------------
/*
	
	Output : 
			 Infinite times executed
			 or
			 No output!

	Description :
			 short int is 2 byte wide
			 therefore 2^16 is the range of short integer variable
			 short <= int 

			 CPU             short   int
			 8 bit           16      16
			 16 bit          16      16
	 		 32 bit          16      32
			 64 bit          16      32

			 Thus, int j can have values upto  [−32,767, +32,767] = 2^16 


			 *****and see the semicolon after while loop*****

*/
