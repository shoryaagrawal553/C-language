//factorial n! / 5!=5*4*3*2*1= 120
#include <stdio.h>
int main()
{
    int i, n, f=1;
    printf("Enter a no.: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("\n%d! = %d", n, f);
}