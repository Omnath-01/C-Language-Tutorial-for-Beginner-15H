
#include <stdio.h>
int main()
{
    printf("int");
    int i = 34;
    int *ptr1 = &i;
    printf("The address of 'i' is %u\n", ptr1);
    // ptr1--;
    ptr1 = ptr1 + 1;
    // pt1r++;
    // ptr1++;
    printf("The address of 'i' is %u\n", ptr1);
    // return 0;
    printf("\nchar\n");

    char c = 34;
    char *ptr2 = &c;
    printf("The address of 'c' is %u\n", ptr2);
    // ptr--;
    ptr2 = ptr2 + 1;
    ptr2 = ptr2 + 1;
    // ptr2++;
    // ptr2++;
    printf("The address of 'c' is %u\n", ptr2);

    printf("\nfloat\n");

    float f = 3.4;
    float *ptr3 = &f;
    printf("The address of 'c' is %u\n", ptr3);
    // ptr--;
    ptr3 = ptr3 + 1;
    // ptr3 = ptr3 +1;
    // ptr3++;
    // ptr3++;
    printf("The address of 'c' is %u\n", ptr3);
    return 0;
}