#include<stdio.h>

int main()
{
    // Declare matrix A and variables for iteration and dimensions
    int A[100][100], i, j, r, c;
    
    // Ask the user for the number of rows and columns
    printf("Enter how many rows and columns you want ");
    scanf("%d%d", &r, &c);
    
    // Get the elements of the matrix from the user
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter element for A[%d][%d] ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Print the matrix
    printf("\nThe matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
