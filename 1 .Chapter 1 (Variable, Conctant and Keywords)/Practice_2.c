// Program to calculate area of circle and volume of a cylinder

#include <stdio.h>
int main()
{
    int radius = 3;
    float PI = 3.14;
    printf("The area of this circle is : %f\n", PI * radius * radius);

    int height = 3;
    printf("Volume of cylinder is : %f", PI * radius * radius * height);
    return 0;
}