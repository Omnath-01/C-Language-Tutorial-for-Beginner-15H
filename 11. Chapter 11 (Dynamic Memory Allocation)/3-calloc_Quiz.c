// Write program to create an arry of size n using calloc n is an integer entered by the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("How many integer do you want to enter: ");
    scanf("%d", &n);
    ptr = (int *)calloc(6 , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    return 0;
}