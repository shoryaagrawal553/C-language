#include <stdio.h>
  
int main()  
{
    // Variable declarations
    int n, i;

    // Input the number of times to print "Hello World" from the user
    printf("Enter how many times you want it: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for(i = 1; i <= n; i++)
    {
        // Print "Hello World" in each iteration
        printf("\nHello World");
    }

    return 0;
}
