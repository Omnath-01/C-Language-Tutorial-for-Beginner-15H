#include<stdio.h>
int main()
{
    // Invalid assign
    // char ptr[] = "code with harry";
    // ptr = "code with shubham ";

    // valid assign 
    char *ptr = "code with harry";     
    ptr = "code with shubham ";       
    printf("%s",ptr);
    return 0;
}