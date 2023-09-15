// Repeat 8 using while loop

#include <stdio.h>
int main()
{
    int i=1 , n = 7, Factorial = 1;
    while( i <= n)
    {
        Factorial *= i;
        i++;
        printf("%d \n",Factorial);
    }
    printf("The value of factorial %d is %d", n, Factorial);
    return 0;
}