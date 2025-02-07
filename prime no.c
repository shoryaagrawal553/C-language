#include<stdio.h>  // Include standard input-output header file

int main() // Main function
{
    int n, i; // Declare two integer variables 'n' and 'i'
    
    // Prompt the user to enter a number
    printf("Enter any number");
    
    // Read the input number and store it in 'n'
    scanf("%d", &n);
    
    // Loop from 2 to n/2 to check for factors
    for(i=2; i<=n/2; i++)
    {
        // If 'n' is divisible by 'i', it is not a prime number
        if(n%i == 0)
        {
            printf("\n %d is not a prime number", n);
            return 0; // Exit the program as soon as a factor is found
        }
    }
    
    // If no factors are found, 'n' is a prime number
    printf("\n %d is a prime number", n);
    
    return 0; // Return 0 to indicate successful execution
}
