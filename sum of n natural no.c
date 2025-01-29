#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter a number ");    // n = 5  => 1+2+3+4+5 = 15
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("\nSum = %d", sum);
}
