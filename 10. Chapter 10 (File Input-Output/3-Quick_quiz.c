// check whether the file is exit or not
#include <stdio.h>
int mian()
{
    FILE *ptr;
    int num, num2;
    ptr = fopen("Harry.txt", "r");
    if (ptr == NULL)
    {
        printf("This file is not exit\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);

        fclose(ptr);
        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }
    return 0;
}