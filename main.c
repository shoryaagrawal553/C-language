#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers :- ");
    scanf("%d%d", &a, &b);
    printf("\nEnter your choice :- \n1. Addition \n2. Difference \n3. Product \n4. Quotient\n  ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
    printf("\nSum of the numbers is %d", a + b);
    break;
    case 2:
    printf("\nDifference of the numbers is %d", a - b);
    break;
    case 3:
    printf("\nProduct of the numbers is %d", a * b);
    break;
    case 4:
    printf("\nQuotient of the numbers is %d", a / b);
    break;
    default:
    printf("\nYou have entered the wrong choice");
    }

        
    }