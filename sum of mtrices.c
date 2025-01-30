#include<stdio.h>
int main()
{
    int A[100][100], B[100][100], i, j, r, c, sum[100][100];
    printf("Enter how many rows and columns you want for first matrix A  ");
    scanf("%d%d", &r, &c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter element for A[%d][%d] ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Enter how many rows and columns you want  ");
    scanf("%d%d", &r, &c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("enter element for B[%d][%d] ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nThe matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of matrices A and B is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
          sum[i][j] = A[i][j] + B[i][j];   
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

























