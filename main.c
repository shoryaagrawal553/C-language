#include <stdio.h>
int main()
{
    int a, b, u, bill;
    printf("Enter last month's electricity units used");
    scanf("%d", &a);
    printf("Enter current month's electricity units used");
    scanf("%d", &b);
    u=b-a;
    printf("\nUnit is %d", u);
    if(u >= 0 && u <= 100)
    {
       bill= (u * 2);
    }
    else
    {
        if(u>=101 && u<=200)
        {
             (bill=u*3);
        }
        else
        {
            if(u>=201 && u<=300)
            {
                (bill=u*4);
            }
            else
            {
                if(u>300)
                {
                    (bill=u*5);
                }
            }
        }
    }
    printf("\nbill is %d", bill);
    
}
