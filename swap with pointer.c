#include<stdio.h>
int swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter two numbers  ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("\na = %d and b = %d", a, b);
}
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
