#include <stdio.h>
int main()
{
    int a[1000], n, i, step, temp;
    printf("Enter how many elements you want ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter the elment for a[%d] ", i);
        scanf("%d", &a[i]);
    }
    for(step=0; step<n-1; step++)
    {
        for(i=0; i<n-1-step; i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("\nThe greatest number is %d", a[n-1]);
}
