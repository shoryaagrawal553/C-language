#include<stdio.h>

int main()
{
    // Variable declarations
    float BS, TA, DA, PF, GS;

    // Input basic salary from the user
    printf("Enter your Basic Salary : ");
    scanf("%f", &BS);

    // Calculate allowances and deductions
    TA = 7 * BS / 100;  // Travel Allowance is 7% of Basic Salary
    DA = 2 * BS / 100;  // Dearness Allowance is 2% of Basic Salary
    PF = 12.5 * BS / 100;  // Provident Fund is 12.5% of Basic Salary

    // Calculate Gross Salary
    GS = BS + TA + DA;

    // Output the Gross Salary
    printf("\n Your Gross Salary is: %f", GS);

    // Output the Net Salary (Gross Salary minus Provident Fund)
    printf("\n Your Net Salary is: %f", GS - PF);

    return 0;
}
