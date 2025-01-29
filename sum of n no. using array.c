#include<stdio.h>
int main() 
{
    int n, i, a[1000], sum=0;
    printf("Enter how many numbers you want to add ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter single a digit no. " );
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=a[i];    // sum = sum + a[i]    now sum=0   sum = 0 + 5   eg: a[0] = 5
    }
    printf("\nSum is %d", sum);
}