// write a program to calcute the factorial of a given number
// using for loop

#include <stdio.h>
int main()
{
    int i , n = 7, Factorial = 1;
    for (i = 1; i <= n; i++)
    {
        Factorial *= i;
        //printf("%d \n",Factorial);
    }
    printf("The value of factorial %d is %d", n, Factorial);
    return 0;
}