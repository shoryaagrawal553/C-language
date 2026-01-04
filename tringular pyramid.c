#include<stdio.h>
 
int main()  
{ 
    int n, i, j, k;  // Declare variables for the number of rows and loop counters
    printf("enter any number ");  // Prompt user for input
    scanf("%d", &n);  // Read the number of rows from the user
    
    // Loop to print each row of the pyramid
    for(i=1; i<=n; i++)
    {
        // Print spaces to create the pyramid shape
        for(j=n-i; j>=0; j--)
        {
            printf(" ");
        }
        // Print asterisks for the current row
        for(k=1; k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");  // Move to the next line after printing each row
    }

    // Alternative approach commented out
    /* 
    for(j=1; j<=n-i; j++)
    {
        printf(" ");
    }
    for(k=1; k<=i; k++)
    {
        printf(" *");
    }
    printf("\n");
    */
}
