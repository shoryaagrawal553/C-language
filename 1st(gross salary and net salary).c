# include<stdio.h>
int main()
{
    float BS, TA, DA, PF, GS;
    printf("Enter your Basic Salary : ");
    scanf("%f", &BS);
    TA = 7 * BS / 100;
    DA = 2 * BS / 100;
    PF = 12.5 * BS / 100;
    GS = BS + TA + DA;
    printf("\n Your Gross Salary is: %f", GS);
    printf("\n Your Net Salary is: %f", GS - PF);
}
