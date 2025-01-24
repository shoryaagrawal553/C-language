# include<stdio.h>
int main()
{
   float a, b;
   printf("Enter two no. ");
   scanf("%f%f", &a, &b);
   if (a % b == 0)
  {
      printf("remainder is 2");
  }
  else
  {
      printf("remainder isn't 2");
  }
}