#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    // sizeof Operator in C
    // printf("The size of int on my PC is %d", sizeof(int));
    // printf("The size of float on my PC is %d", sizeof(float));
    // printf("The size of char on my PC is %d", sizeof(char));
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }

    // Reallocate ptr using realloc
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    return 0;
}