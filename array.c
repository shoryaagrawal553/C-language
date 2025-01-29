#include<stdio.h>
int main()
{
    int n, i, a[1000];
    printf("Enter how many elements u want to register ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter array elements a [%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\nElements of array are ");
    for(i=0; i<n; i++)
    {
        printf("\n %d", a[i]);
    }
}