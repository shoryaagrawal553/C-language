#include<stdio.h>  
int main()
{
    int A[100][100], B[100][100], i, j, r, c, sum[100][100]; // Declare matrices and variables

    printf("Enter how many rows and columns you want for first matrix A  ");
    scanf("%d%d", &r, &c); 

    for(i=0; i<r; i++)   // Loop to input elements of matrix A
    {
        for(j=0; j<c; j++)
        {
            printf("enter element for A[%d][%d] ", i+1, j+1); // Prompt for each element
            scanf("%d", &A[i][j]); // Read the element into matrix A
        }
    }

    // Display the first matrix A
    printf("\nThe matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", A[i][j]); // Print each element of matrix A
        }
        printf("\n"); // New line for each row
    }

    // Prompt the user to enter the number of rows and columns for the second matrix B
    printf("Enter how many rows and columns you want  ");
    scanf("%d%d", &r, &c); // Read the number of rows and columns

    // Loop to input elements of matrix B
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter element for B[%d][%d] ", i+1, j+1); // Prompt for each element
            scanf("%d", &B[i][j]); // Read the element into matrix B
        }
    }

    // Display the second matrix B
    printf("\nThe matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", B[i][j]); // Print each element of matrix B
        }
        printf("\n"); // New line for each row
    }

    // Calculate the sum of matrices A and B
    printf("\nSum of matrices A and B is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j] = A[i][j] + B[i][j]; // Calculate the sum of corresponding elements
        }
    }

    // Display the sum matrix
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", sum[i][j]); // Print each element of the sum matrix
        }
        printf("\n"); // New line for each row
    }

    return 0; 
}
