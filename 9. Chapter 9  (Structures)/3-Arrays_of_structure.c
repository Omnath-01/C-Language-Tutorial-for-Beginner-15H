
#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee facebook[100]; 

    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Harry");

    facebook[1].code = 100;
    facebook[1].salary = 100.45;
    strcpy(facebook[1].name, "Rohan");

    facebook[2].code = 100;
    facebook[2].salary = 100.45;
    strcpy(facebook[2].name, "skill f khiladi");

    printf("done");
    return 0;
}