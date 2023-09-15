//  create program to add two number in c

#include <stdio.h>
int main()
{
    int a = 7, d = 5, e;
    float m = 8.5, n = 7.0, p;

    e = a + d;
    int Diff = a - d;

    printf(" The sum of a and d is  %d \n ", a + d);
    printf(" The sum of a and d is  %d \n ", e);
    printf(" The difference  of a and d is  %d \n ", Diff);

    printf(" The product of a and d is  %d \n ", a * d);

    printf("\n");

    p = m + n;
    float diff = m - n;

    printf(" The sum of m and n is  %f \n ", m + n);
    printf(" The sum of m and n is  %f \n ", p);
    printf(" The difference  of m and n is  %f \n ", diff);

    printf(" The product of m and n is  %f \n ", m * n);
    return 0;
}