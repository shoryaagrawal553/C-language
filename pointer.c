#include<stdio.h>  // Include standard input-output header file

int main() // Main function
{
    int a, *b; // Declare an integer variable 'a' and an integer pointer 'b'
    a = 10; // Initialize 'a' with value 10
    b = &a; // Assign the address of 'a' to pointer 'b'
    
    // Print the value of 'a'
    printf("Value of a is %d", a);
    
    // Print the address of 'a'
    printf("\nAddress of a is %x", &a);
    
    // Print the value of pointer 'b' (which is the address of 'a')
    printf("\nValue of b is %x", b);
}
