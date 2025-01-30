#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter any number");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            printf("\n %d is not a prime number", n);
        }
        else
        {
            printf("\n %d is a prime number", n);
        }
    }
}