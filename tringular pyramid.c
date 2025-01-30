#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("enter any number ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>=0; j--)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    //      OR (self)
   /* for(j=1; j<=n-i; j++)
    {
        printf(" ");
    }
    for(k=1; k<=i; k++)
    {
        printf(" *");
    }
    printf("\n");
    }*/
}

























