// writte a program to store the details of 3 employee from user defined data use the  structure 
// declared above
#include<stdio.h>
#include<string.h>

struct employee {   
    int code;
    float salary;
    char name[10];
};
int main(){

    struct employee e1,e2,e3;

    printf("Enter the value of code e1 : ");
    scanf("%d",&e1.code);
    printf("Enter the value of salary e1 : ");
    scanf("%f",&e1.salary);
    printf("Enter the value of name e1 : ");
    scanf("%s",e1.name);

    printf("Enter the value of code e2 : ");
    scanf("%d",&e2.code);
    printf("Enter the value of salary e2 : ");
    scanf("%f",&e2.salary);
    printf("Enter the value of name e2 : ");
    scanf("%s",e2.name);

    printf("Enter the value of code e3 : ");
    scanf("%d",&e3.code);
    printf("Enter the value of salary e3 : ");
    scanf("%f",&e3.salary);
    printf("Enter the value of name e3 : ");
    scanf("%s",e3.name);
    
    return 0;
}