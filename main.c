#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("enter a no. ");
    scanf("%d", &n);
    for(i=1; i<=n; i++);
    {
      sum+=i; 
    }
    printf("\nSum = %d", sum);
}