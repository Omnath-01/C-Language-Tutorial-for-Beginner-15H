// valid in C

#include <stdio.h>
int main()
{
    // int a; b=a; // invalid //error: 'b' undeclared (first use in this function)
    int v = 3 ^ 3; // valid statment XOR Operator
    // char dt= '21'; //  [-Wmultichar]
    char dt = '2';
    
    printf("%d", v); // return 0

    float d=(3.0/8-2);
    printf("\n%f",d);
    return 0;
}