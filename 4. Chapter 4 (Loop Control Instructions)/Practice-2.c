// Write program to print multiplication table "10" in reverse order

#include <stdio.h>
int main()
{
    printf("\n****Multiplication table of 10***** \n ");
    for (int i = 10; i; i--)
    {
        printf("10 x %d = %d \n ", i, 10 * i);
    }
}