// Q.1 wrirte a program to read three intger from a file

#include <stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    ptr = fopen("pr01.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of a ,b and c is %d %d %d ", a, b, c);
}