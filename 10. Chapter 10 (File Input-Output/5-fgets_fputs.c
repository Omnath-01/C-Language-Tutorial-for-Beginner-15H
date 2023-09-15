#include <stdio.h>
int main()
{
    FILE *ptr;
    // // fgta demo for reading a file
    // ptr = fopen("getsdemo.txt", "r");
    // // char c = fgetc(ptr);
    // printf("The value of my charcter is %c\n", fgetc(ptr));
    // printf("The value of my charcter is %c\n", fgetc(ptr));
    // printf("The value of my charcter is %c\n", fgetc(ptr));
    // printf("The value of my charcter is %c\n", fgetc(ptr));

    ptr = fopen("putsdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}