// C Program to calculate area of ractangle
// using inputs supplied by the user

#include <stdio.h>
int main()
{
    int length, breadth;
    // int area=length*breadth;
    printf("What is the length of Reactangle : ");
    scanf("%d", &length);

    printf("What is the breadth of Reactangle : ");
    scanf("%d", &breadth);

    printf("The area of your Reactangle is : %d\n", length * breadth);

    // int area=length*breadth;
    // printf("The area of this Reactangle is : %d\n",area);
    return 0;
}