#include <stdio.h>
int main()
{
    int i,n,table;
    printf("Enter a no. ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
    table=n*i;
    printf("\n%d", table);
    }
}