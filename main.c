#include <stdio.h>
int main()
{
    int choice;
    printf("\n Enter your choice");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("\nMonday");
        break;
        case 2:
        printf("\nTuesday");
        break;
        case 3:
        printf("\nWednesday");
        break;
        default:
        printf("\n You have entered the wrong choice");
    }
}