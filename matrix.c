#include<stdio.h>
int main()
{
    int A[100][100], i, j, r, c;
    printf("Enter how many rows and columns you want ");
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
}
