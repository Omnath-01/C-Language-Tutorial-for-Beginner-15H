
#include <stdio.h>
// sum is a function which takes a and b as input and return an integer as an output
int sum(int a, int b);
int main()
{
    int c;
    c = sum(2, 5);     // argument = 'Actual value'
    printf("The value of c is %d \n",c);
    return 0;
}
int sum(int a, int b) // a & b are parameter
{

    int result;
    result = a + b;
    return result;
}