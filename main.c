#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)  // its for rows
    {
        for(j=1; j<=i; j++)  //its for columns
        {
        printf("* ");
        }
        printf("\n");
    }
}