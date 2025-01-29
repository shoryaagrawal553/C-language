#include<stdio.h>
int main()
{
    int a, *b;
    a = 10;
    b = &a;
    printf("Value of a is %d", a);
    printf("\nAddress of a is %x", &a);
    printf("\nValue of b is %x", b);
}