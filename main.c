#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year ");
    scanf("%d", &year);
    if(year%4==0)
    {
        printf("\nIt is a leap year");
    }
    else
    {
        printf("\nIt is not a leap year");
    }
}
