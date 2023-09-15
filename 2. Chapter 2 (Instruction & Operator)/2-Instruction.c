// arthimatics instruction

#include <stdio.h>
#include "conio.h"
#include <math.h>
int main()
{
    
    int a = 2;
    int b = 8;

    printf("The value of a - b is : %d\n", a + b);
    printf("The value of a + b is : %d\n", a - b);
    printf("The value of a * b is : %d\n", a * b);
    printf("The value of a / b is : %d\n", a / b);
    // printf("The value of a % b is : %d\n",a%b);

    int z;
    z = a * b; // legal
    // a * b = z;     //illagal
    printf("The value of z is : %d\n", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("-5 when divided by -2 leaves a remainder of %d\n", -5 % -2);

    // No operator is assumed to be present
    printf("The value of 4*5 is : %d\n", 4.5); // no error --> return : 0
    /* printf("The value of 4*5 is %d\n",(4).(5)); --> will not return 20/wrong !!
     //expected identifier before '(' token          */
    printf("The value of 4*5 is : %d\n", 4 * 5);
    printf("The value of 4*5 is %d\n", (4) * (5));

    // No operator to perform expontiention in C
    printf("The value of 4 ^ 5 is %d\n", 4 ^ 5); // -->will not produce 4^5 // '^' bitwise XOR operator

    printf("The value of 4 ^ 5 is %f\n", pow(2, 5));
    printf("The value of 4 the power 5 is %f\n", pow(2, 5));

    // type conversion
    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    // printf("The value of 6 + 5.6 is %d\n",6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
    printf("The value of 5/2 is %d\n", 5 / 2);

    printf("The value of 3.0/9 is %f\n", 3.0 / 9);
    printf("The value of 3.0/9 is %d\n", 3.0 / 9);
    return 0;
}