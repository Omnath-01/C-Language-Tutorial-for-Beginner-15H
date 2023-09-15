// Write a program to sum of first  ten natural number
// using while loop

#include <stdio.h>
int main()
{
    int i=1, sum = 0, n = 10;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("\nThe value of sum (1 to 10) is %d", sum);
    return 0;
}

// using for loop

// #include <stdio.h>
// int main()
// {
//     int i, sum=0, n = 10;

//     for (i = 1; i <= n; i++)
//     {
//         sum += i;
//         //printf("%d\n",sum);
//     }
//     printf("\nThe value of sum (1 to 10) is %d",sum);
//     return 0;
// }