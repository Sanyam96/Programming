// Program to calculate factorial of bigger numbers

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int a[500];
	int n = 6;
	int n2 = n;
	int i = 0;
	int x = n;
	int y;
	int m = 0;
	int j;

	while( x != 0 ) {
		a[i++] = x % 10;
		x = x / 10;
		m++;
	}

	for( i = n; i > 1; i--) {
		int temp=0;
		int c=i-1;
		for( j = 0; j < m; j++) {
			y = a[j] * c + temp;
			a[j] = y % 10;
			temp = y / 10;
		}
		while( temp != 0) {
			a[m++] = temp % 10;
			temp /= 10;
		}
	}
	for( i = m-1; i >= 0; i--) {
		printf( "%d", a[i]);
	}
	cout << endl;
    return 0;
}
