// type declaration instruction

#include <stdio.h>
int main()
{
    int a = 4, b ,c ; // type declaration instruction
    b = c = a;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    printf("The value of c is : %d\n",c);

  /*float n = m + 8.9;
    float m = 1.1;
    printf("The value of c is : %f",n);  */
// 'm' undeclared (first use in this function)

    float m = 1.1;
    float n = m + 8.9;
    printf("The value of c is : %f",n);
    return 0;
}