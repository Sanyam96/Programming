// In the following progam how long will the for loop get executed?

#include <bits/stdc++.h>
using namespace std;

int main() {

	int i;
	for(; scanf("%d", &i); printf("%d\n", i ));
    return 0;
}



// -----------------------------------------------------------------
/*
	Output: 

	// The for loop would get executed 5 times
	// Because return value of the function scanf() would act as result of the condition
	// hence value is always nonZero. hence true always
*/