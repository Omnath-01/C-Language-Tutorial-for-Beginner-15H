
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x = 4, y = 7;
    printf("The value of a and b is %d and %d\n", x, y);
    printf("The value of 4 + 7 is %d\n", sum(x, y));
    printf("riThe value of x and y after function call is %d and %d \n",x,y);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 3435;
    a = 23452;
    return c;
}
