#include<stdio.h>

// Function prototype for swap
int swap(int *, int *);
    
int main()
{
    int a, b;  // Declare variables to store the two numbers

    printf("Enter two numbers  ");  // Prompt the user to enter two numbers
    scanf("%d%d", &a, &b);  // Read the two numbers from the user

    swap(&a, &b);  // Call the swap function to swap the values of a and b using pointers

    printf("\na = %d and b = %d", a, b);  // Print the swapped values of a and b
}

// Function to swap the values of two integers using pointers
int swap(int *x, int *y)
{
    int temp;  // Declare a temporary variable to store the value during swapping

    temp = *x;  // Store the value of x in temp
    *x = *y;  // Assign the value of y to x
    *y = temp;  // Assign the value of temp to y
}
