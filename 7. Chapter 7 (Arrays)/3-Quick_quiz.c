// write a program to accept marks of five students in an array and print then to the screen

#include <stdio.h>
int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for students %d : ", i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for students  %d and %d :\n", i+1,marks[i]);
    }
    
    return 0;
}