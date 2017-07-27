// Ques: What values would be stored in variables i and j defined below

int i;
float j;

// Answer:
// 			It depends upon where they are defined!!!

// 			1. If they are defined **outside all the variables** then they would be considered as "external storage" 
// 				hence would contain default values of 0 and 0.000000 respectively

// 			2. If they are defined inside a function then they would be treated as **automatic storage class variables**
// 				hence the variables would contain garbage values!


/*
// Case1 ::
#include <bits/stdc++.h>
using namespace std;

int i;
float j;

int main() {

	printf("%d\n", i );
	printf("%f\n", j );
    return 0;
}
*/

/*
// Case2 ::
#include <bits/stdc++.h>
using namespace std;

int main() {

	int i;
	float j;

	printf("%d\n", i );
	printf("%f\n", j );
    return 0;
}
*/