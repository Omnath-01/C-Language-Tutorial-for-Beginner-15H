
#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i; // j will now store the addresss of 'i'=
    // printf("The value of 'i' is %d\n",i);
    printf("The value of 'j' is %u\n", *j);
    // printf("\n ******************** \n");
    printf("The address of 'i' is %u\n", &i);
    // printf("The value of 'j' is %u\n",j);
    printf("The address of 'j' is %u\n", *j);
    printf("The address of 'j' is %u\n", &j);
    // printf("The value  of 'j' is %u\n",*(&i));
    // printf("The value  of 'j' is %u\n",*(&j));
    return 0;
}