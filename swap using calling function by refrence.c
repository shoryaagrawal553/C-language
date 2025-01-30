#include<stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    swap(&a,&b);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\n After swapping the value of a is %d and of b is %d", *a, *b);
}