#include <stdio.h>

int main()
{
    // Declare variables to store the three numbers
    int a, b, c;
    
    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    // Check if a is greater than b
    if(a > b);
    {
        // Check if a is also greater than c
        if(a > c)
        {
            // If a is greater than both b and c, a is the greatest
            printf("A is the greatest number: ");
        }
        else
        {
            // If c is greater than a, then check if c is greater than a
            if(c > a)
            {
                printf("C is the greatest number :");  
            }
            else 
            {
                // If c is not greater than a, check if c is greater than b
                if(c > b)
                {
                    printf("C is the greatest number: ");
                }
                else
                {
                    // If c is not greater than b, then b is the greatest
                    printf("B is the greatest number: ");
                }
            }
        }
    }
}
