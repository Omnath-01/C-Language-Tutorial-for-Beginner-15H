// Q.4 write a program to illustrate the use of arrow operator in C

#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101; // or you can also write : ptr->code = 101
    ptr->code = 101;
    printf("%d",e1.code);
    return 0;
}