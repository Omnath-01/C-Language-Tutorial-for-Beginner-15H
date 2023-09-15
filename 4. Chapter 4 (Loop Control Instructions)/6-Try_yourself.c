// write program to print fist n natural number

#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    printf("Enter frist n Natural numbers : ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < n);

    return 0;
}