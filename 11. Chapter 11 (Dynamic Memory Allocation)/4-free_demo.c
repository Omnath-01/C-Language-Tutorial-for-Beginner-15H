

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    
    int *ptr2;
    // sizeof Operator in C
    // printf("The size of int on my PC is %d", sizeof(int));
    // printf("The size of float on my PC is %d", sizeof(float));
    // printf("The size of char on my PC is %d", sizeof(char));
    
    ptr = (int *)malloc(600 * sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int *)malloc(600 * sizeof(int));
        printf("Enter the value of %d element : ", i);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    return 0;
}