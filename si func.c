// si  = (principle * rate * time)
#include<stdio.h>
float si(int, int, int);
int main()
{
    int p, r, t;
    printf("Enter principle, rate and time ");
    scanf("%d%d%d", &p, &r, &t);
    si (p, r, t);
}
float si(int p, int r, int t)
{
    float si;
    si = (p * r * t) / 100;
     printf("\nSimple Intrest = %f", si);

}
