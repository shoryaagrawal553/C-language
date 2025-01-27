#include<stdio.h>
int addition(int, int);
int main()
{
    int a, b, sum;
    printf("Enter two no ");
    scanf("%d%d", &a, &b);
    sum = addition (a, b);
    printf("\nSum = %d", sum);
}
int addition (int a, int b)
{
    //printf("\n sum = %d", a + b);
    return(a + b);
}