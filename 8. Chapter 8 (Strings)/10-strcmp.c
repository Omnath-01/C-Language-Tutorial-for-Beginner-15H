#include<stdio.h>
#include<string.h>
int main()
{
    // strings are unequal print = 1
    char st1[45] = "Helo";
    char *st2 = "Hel";
    int val = strcmp(st1, st2);
    printf("NOW the val is %d",val);

    // strings are Equal print = 0
    // char st1[45] = "Hello";
    // char *st2 = "Hello";
    // int val = strcmp(st1, st2);
    // printf("NOW the val is %d",val);

    // mismatch 1st string print = -1
    // char st1[45] = "Hel";
    // char *st2 = "Helo";
    // int val = strcmp(st1, st2);
    // printf("NOW the val is %d",val);


    // mismatch 2nd string print = 1
    // char st1[45] = "Helo";
    // char *st2 = "Hel";
    // int val = strcmp(st1, st2);
    // printf("NOW the val is %d",val);
    return 0;
}