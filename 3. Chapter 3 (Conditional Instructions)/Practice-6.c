// Q.6 write a program to find gretest numbers entered by the user
// Try yourself
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, max;
    printf("Enter any four number : ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    max = n1;
    if (n2 > max)
    {
        max = n2;
    }
    if (n3 > max)
    {
        max = n3;
    }
    if (n4 > max)
    {
        max = n4;
    }

    printf("Greatest number among 4 numbers : %d", max);
}