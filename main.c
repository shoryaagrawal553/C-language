#include <stdio.h>
int main()
{
//multiple programs fom if else in switch case
int a, b, temp, E, H, M, S, total, choice;
float per;
printf("Enter your choice \n1. Greatest among two numbers \n2. Marksheet \n3. Swapping using third variable \n ");
scanf("%d", &choice);
switch(choice)
{
    case 1:
    printf("\nEnter two numbers ");
    scanf("%d%d", &a, &b);
    if(a > b)
    {
        printf("\nA is the greatest number");
    }
    else
    {
        printf("\nB is the greatest number");
    }
    break;
    case 2:
    printf("\nEnter marks of four subjects ");
    scanf("%d%d%d%d", &E, &H, &M, &S);
    per = (E + H + M + S) * 100 / 400;
    printf("\nYour total percentage is %f", per);
    if(per > 75)
    {
        printf("\nPssed with I division honours");
    }
    else
    {
        if(per > 60 && per <= 75)
        {
            printf("\nPssed with I division");
        }
        else
    {
        if(per > 45 && per <= 60)
        {
            printf("\nPssed with II division");
        }
        else
    {
        if(per > 32 && per <= 45)
        {
            printf("\nPssed with III division");
        }
        else
    {
        if(per < 32)
        {
            printf("\nYou FAILED");
        }
    }
    }
    }
    }
    break;
    case 3:
    printf("\nEnter two no.");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping the value of a is %d and of b is %d", a, b);
    break;
    default:
    printf("\nYou have entered wrong choice");
}
}