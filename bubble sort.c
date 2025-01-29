#include<stdio.h>
int main()  /* arrangement will take place in n-1 steps
            and swappping will take place in n-1-step the step its taking place in 
            'cause in every step last element will already be arranged
            and the one before it will get arranged in next step*/
{      
    int i,n,step,temp,a[1000];
    printf("Enter how many elements you want to add ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter the element a[%d] ", i);
        scanf("%d", &a[i]);
    }
    for(step=0; step<n-1; step++)
    {
        for(i=0; i<n-1-step; i++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("elements in ascending order are ");
    for(i=0; i<n; i++)
    {
        printf(" %d ", a[i]);
    }
}