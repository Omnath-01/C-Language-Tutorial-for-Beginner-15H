// write a program to print n  natural number in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for ( i = n; i; i--){
        printf("The number is %d\n", i);
    }
}