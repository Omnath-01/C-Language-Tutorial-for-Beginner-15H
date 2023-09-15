// Q.1 create an array of 10 number verify using pointer  arithematics that (ptr+2) point
//     third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main()
{
    int arr[10];
    int * ptr = arr;
    // int * ptr = &arr[0];
    ptr = ptr + 2;

    if(ptr==&arr[2])
    {
        printf("These point to the same location in memory\n");
    }
    else
    {
        printf("These point do not point  to the same location in memory\n");
    }
    return 0;
}