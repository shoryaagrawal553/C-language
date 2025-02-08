#include <stdio.h>

// Function prototype for table
int table(int);

int main()
{
    int n, t, i;  // Declare variables for input number, table value, and loop counter

    printf("\nEnter a no. ");  // Prompt the user to enter a number
    scanf("%d", &n);  // Read the input number from the user

    table(n);  // Call the table function with the input number
}

// Function to print the multiplication table of the given number
int table(int n) 
{
    int i;  // Declare loop counter variable

    // Loop to print the multiplication table
    for(i=1; i<=10; i++)
    {
        printf("\n%d*%d = %d", n, i, n*i);  // Print the current value in the multiplication table
    }
}
