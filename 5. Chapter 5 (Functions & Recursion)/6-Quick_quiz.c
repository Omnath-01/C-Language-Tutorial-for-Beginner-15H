// Area of square
#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the value of side : ");
    scanf("%d", &side);
    printf("The area is %.1f", pow(side, 2));

    return 0;
}