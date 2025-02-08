#include<stdio.h>

int main() 
{
    int n, i, a[1000], sum = 0;  /* Declare variables: n for number of inputs,
                                     i for loop counter, a for storing numbers, 
                                     and sum for storing the sum of numbers  */

    printf("Enter how many numbers you want to add ");  // Prompt the user to enter the number of inputs
    scanf("%d", &n);  // Read the number of inputs from the user

    // Loop to read n numbers into the array a
    for(i = 0; i < n; i++)
    {
        printf("Enter a single digit no. ");  // Prompt the user to enter a number
        scanf("%d", &a[i]);  // Read the number and store it in the array a
    }

    // Loop to calculate the sum of all numbers in the array
    for(i = 0; i < n; i++)
    {
        sum += a[i];  // Add the current number to the sum
        // sum = sum + a[i]    // Example: if sum = 0 and a[0] = 5, then sum = 0 + 5
    }

    // Print the sum of the numbers
    printf("\nSum is %d", sum);
}
