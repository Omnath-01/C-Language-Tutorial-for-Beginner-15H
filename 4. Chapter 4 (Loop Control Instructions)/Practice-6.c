// write a program to implement program 5 using
//for and do while loop

// using do while loop
#include <stdio.h>
int main()
{
    int i=1, sum = 0, n = 10;

    do
    {
        sum += i;
        i++;
    }
    while (i <= n);

    printf("\nThe value of sum (1 to 10) is %d", sum);
    return 0;
}
