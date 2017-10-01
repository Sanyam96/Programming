// Tribonacci Numbers
/*

The tribonacci series is a generalization of the Fibonacci sequence where each term 
is the sum of the three preceding terms.

The Tribonacci Sequence :
0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 
3136, 5768, 10609, 19513, 35890, 66012, 121415, 223317, 410744, 
755476, 1389537, 2555757, 4700770, 8646064, 15902591, 29249425, 
53798080, 98950096, 181997601, 334745777, 615693474, 1132436852… so on

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int a = 0;
	int b = 0;
	int c = 1;
	int n;
	cin >> n;
	cout << a << ", " << b << ", " << c;
	for( int i = 0; i < n-3; i++) {
		int numb = a + b + c;
		cout << ", " << numb;
		a = b;
		b = c;
		c = numb;
	}
	cout << "\n";
    return 0;
}
