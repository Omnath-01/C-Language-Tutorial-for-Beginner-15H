// write a program to  calculate the sum of the number occuring 
// in the multiplication table of 8 (consider 8 x 1 to 8 x 10).

#include<stdio.h>
int main()
{
    printf("\n****Multiplication table of 8 ***** \n ");
    for(int i=1;i<=10;i++)
    {
        printf("8 x %d = %d \n ", i, 8*i);
    }
}