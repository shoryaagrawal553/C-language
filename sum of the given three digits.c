#include <stdio.h>
//user enter a three digit no and gets the sum of digits
int main()
{
    int n, x, y, z, e;
    /*258 2=x  5=y  8=z 
    how to get digits seperated?
    x=258/100= 2      normally it is 2.58
    extra= 258 % 100   remainder will be 58 
    y = 58 / 10        quotient will be 5 
    z = 58 % 10        as its remainder is 8
    */

    printf("Enter a three digit no.: "); 
    scanf("%d", &n);
    if(n>99 && n<=999)
    {
        x=n/100;
        e=n%100;
        y=e/10;
        z=e%10;
        printf("\nSum of the digits is %d", x+y+z);
    }
    else
    {
        printf("\nPlease enter a three digit no. only");
    }
}