// logical operator && || !

#include <stdio.h>
int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;

    printf("Enter your age : ");
    scanf("%d", &age);

    // if(age <= 70 && age>=18)
    // if((age <= 70 && age>=18) || !(vipPass==1))
    if ((age <= 70 && age >= 18) || vipPass == 1)
    {
        printf("your above 18 and below 70 , you can drive\n");
    }

    else
    {
        printf("you cannot drive \n");
    }

    return 0;
}