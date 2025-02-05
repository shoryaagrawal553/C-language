#include<stdio.h>

int main()  
{      
    // Variable declarations
    int i, n, step, temp, a[1000];

    // Input number of elements in the array from the user
    printf("Enter how many elements you want to add: ");
    scanf("%d", &n);

    // Input array elements from the user
    for(i=0; i<n; i++)
    {
        printf("\nEnter the element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Bubble Sort algorithm to sort the array in ascending order
    for(step=0; step<n-1; step++)
    {
        // Perform n-1-step comparisons in each iteration
        for(i=0; i<n-1-step; i++)
        {
            // Swap elements if they are in the wrong order
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    // Output the sorted array in ascending order
    printf("Elements in ascending order are: ");
    for(i=0; i<n; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}
