

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("your above 90, you cannot drive\n");
    }
    else
    {
        printf("you can drive \n");
    }

    if (age == 50)
    {
        printf("Half Century");
    }

    return 0;
}