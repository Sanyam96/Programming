// Largest of three numbers
// contain different approaches in *main* function!!
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int no = 0;
	int max = INT_MIN;
	cout << max << endl;

	for (int i = 0; i < 3; ++i) {
		cin >> no;
		if( max < no ) {
			max = no;
		}
	}
	cout << max << endl;

    return 0;
}


/*
int main() {
	
	int no1, no2, no3;
	cin >> no1 >> no2 >> no3;

	if( (no1 > no2) && (no1 >> no3)) {
		cout << "Largest of three numbers is : " << no1 << endl;
	}
	else if( (no2 > no1) && (no2 >> no3)) {
		cout << "Largest of three numbers is : " << no2 << endl;	
	}
	else {
		cout << "Largest of three numbers is : " << no3 << endl;
	}

    return 0;
}
*/

