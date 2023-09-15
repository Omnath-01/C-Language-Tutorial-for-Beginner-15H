// Q.5 what will the following line produce in C program
// int a=3;
// printf("%d %d %d",a,++a,a++);

#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}