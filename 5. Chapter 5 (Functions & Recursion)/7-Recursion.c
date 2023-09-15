#include <stdio.h>
int factorial(int x);
int main()
{
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}
// Function to calculate factorial using recursion

int factorial(int x)
{
    printf("Calling factoria (%d)\n", x);
    if (x == 0 || x == 1)
        return 1;
    else
    {
        return x * factorial(x - 1);
    }
}