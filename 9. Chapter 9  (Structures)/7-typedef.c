// complete this show function to display the content of employee

#include<stdio.h>
#include<string.h>

typedef struct employee {
    int code;
    float salary;
    char name[20];
}emp;
void show(emp emp1)
{
    printf("The code of employee is : %d\n",emp1.code);
    printf("The salary of employee is : %f\n",emp1.salary);
    printf("The Name of employee is : %s\n",emp1.name);
    
}

int main(){
    // Declaring e1 and *ptr 
    // struct employee e1;   
    // struct employee *ptr;
    emp e1;
    emp *ptr;

    // pointer to e1
    ptr = &e1;

    // set the member values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Harry");
    show(e1);
    printf("The code of employee is : %d\n",e1.code);
    return 0;
}