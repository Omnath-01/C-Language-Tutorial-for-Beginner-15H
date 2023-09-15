// write a program to check whether a given number is prime or not using loop

#include <stdio.h>
int main()
{
    // Prime numbers =

    // Disclaimer :this is not the best method to solve this program
    int i, n = 3, prime=1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime=0;
            break;
        }
    }
    if(prime==0 )
    {
        printf("This is a not prime number");
    }
    else{
        printf("This is a prime number");
    }
    return 0;
}