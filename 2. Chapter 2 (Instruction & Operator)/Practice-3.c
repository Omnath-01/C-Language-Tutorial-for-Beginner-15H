// Q3. Write program to determine whether a number is divided by 97 or not

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Divisibility test return : %d\n", num % 97);
    return 0;
}