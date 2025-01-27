#include <stdio.h> 
int table(int);
int main()
{
    int n,t,i;
    printf("\nEnter a no. ");
    scanf("%d", &n);
    table( n);
}
int table(int n) 
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("\n%d*%d = %d", n, i, n*i);
    }
}
