// Program to calculate simple interest

#include <stdio.h>
int main()
{
    int principale = 100, rate = 4, years = 2;
    int simpleInterest = principale * rate * years / 100;
    printf("The value of simple Interest is %d :", simpleInterest);
    return 0;
}