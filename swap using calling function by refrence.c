#include<stdio.h>

// Function prototype for swap
void swap(int *, int *);

int main()
{
    int a, b;  // Declare variables to store the two numbers

    printf("Enter two numbers ");  // Prompt the user to enter two numbers
    scanf("%d%d", &a, &b);  // Read the two numbers from the user

    swap(&a, &b);  // Call the swap function to swap the values of a and b using pointers
}

// Function to swap the values of two integers using pointers
void swap(int *a, int *b)
{
    int temp;  // Declare a temporary variable to store the value during swapping

    temp = *a;  // Store the value of a in temp
    *a = *b;  // Assign the value of b to a
    *b = temp;  // Assign the value of temp to b

    // Print the swapped values of a and b
    printf("\n After swapping the value of a is %d and of b is %d", *a, *b);
}
