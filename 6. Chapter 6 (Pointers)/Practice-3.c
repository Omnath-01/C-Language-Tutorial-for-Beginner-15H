// Q.3 write a program to change the value of a variable  to 10th time of its current value
// write a function and pass the value by referance
#include <stdio.h>
int tenTime(int *a)
{
    return 10 * (*a);
}
int main()
{
    int i;
    scanf("%d", &i);
    int a = tenTime(&i);
    printf("%d\n", a);
    return 0;
}