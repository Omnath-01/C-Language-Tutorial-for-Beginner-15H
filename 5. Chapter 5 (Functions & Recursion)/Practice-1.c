// Q.1 write a program using function to find 
// average of three number

#include <stdio.h>

float average(int, int, int);

int main()
{
    int a,b ,c;
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    printf("Enter the value of b : \n");
    scanf("%d",&b);
    printf("Enter the value of b : \n");
    scanf("%d",&c);

    printf("The average of a, b and c is %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a+ b+ c)/3;
    return result;
}