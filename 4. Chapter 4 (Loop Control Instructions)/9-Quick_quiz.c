// write a program to print a n natural number
#include <stdio.h>
int main()
{
    int a, n;
    printf("Enter frist n Natural numbers : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        printf("The number is %d\n", a);
    }
    return 0;
}
