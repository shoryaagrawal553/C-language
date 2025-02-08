#include <stdio.h>

// Function to calculate the sum of the digits of a three-digit number entered by the user
int main()
{
    int n, x, y, z, e;  // Declare variables to store the number and its digits

    /* 
    Example: If the number is 258:
    x = 2, y = 5, z = 8
    How to get digits separated?
    x = 258 / 100 = 2       // Integer division gives the hundreds place
    e = 258 % 100 = 58      // Modulus operation gives the remainder (last two digits)
    y = 58 / 10 = 5         // Integer division of remainder gives the tens place
    z = 58 % 10 = 8         // Modulus operation gives the units place
    */

    printf("Enter a three digit no.: ");  // Prompt the user to enter a three-digit number
    scanf("%d", &n);  // Read the number from the user

    // Check if the entered number is a three-digit number
    if(n > 99 && n <= 999)
    {
        x = n / 100;  // Extract the hundreds place digit
        e = n % 100;  // Get the last two digits
        y = e / 10;  // Extract the tens place digit
        z = e % 10;  // Extract the units place digit

        // Print the sum of the digits
        printf("\nSum of the digits is %d", x + y + z);
    }
    else
    {
        // Print an error message if the entered number is not a three-digit number
        printf("\nPlease enter a three digit no. only");
    }
}
