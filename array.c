#include<stdio.h>

int main()
{
    // Variable declarations
    int n, i, a[1000];

    // Input number of elements in the array from the user
    printf("Enter how many elements you want to register: ");
    scanf("%d", &n);

    // Input array elements from the user
    for(i=0; i<n; i++)
    {
        printf("Enter array element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Display the elements of the array
    printf("\nElements of the array are: ");
    for(i=0; i<n; i++)
    {
        printf("\n %d", a[i]);
    }

    return 0;
}
