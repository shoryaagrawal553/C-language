#include <stdio.h>
void hello(); //function prototype or declaring / telling compiler here exists a function
void gb(); // also called function declaration
int main()
{
   hello(); // function calling
   gb(); // this too
}
void hello() // defining function
{
    printf("\nHELLO!");
}
void gb() // defining function
{
    printf("\nGood Bye!!!!!");
}

