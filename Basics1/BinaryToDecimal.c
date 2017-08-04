#include <stdio.h>

long long int power(long long int, long long int);

int main()
{
    long long int a[100]; 
    long long int n, dec = 0; 
    long long int j = 0;
    long long int f;
    printf("enter the number of bits for which you want of calculate decimal \n");
    scanf("%lld",&n);
    printf("enter binary number one by one \n");
    long long int i = 0;

    for( i = 0 ; i < n; i++)
    {
         scanf("%lld",&a[i]);
    }

    for( i = n-1; i >= 0; i--) 
    {
        dec = ( a[i] * power(2,j) ) + dec;
        j++;
    }
    printf("binary number of decimal is %lld\n",dec);
    
}

long long int power(long long int c, long long int d)
{
    long long int pow = 1;
    long long int i = 1;
    while( i <= d) 
    {
        pow=pow*c;
        i++;
    }
    return pow;
}