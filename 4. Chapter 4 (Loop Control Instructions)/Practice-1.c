
// Write program to print multiplication table of a given number 'n'

#include <stdio.h>
int main()
{
    int n;

    printf("\nMultiplication table of n =  ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("n x %d = %d\n ", i, n * i);
    }
}