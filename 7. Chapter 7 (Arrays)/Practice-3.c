// Q.3 write a program to create an array of 10 integer 
//      and store multiplicationtable of 5 in it 

#include<stdio.h>

int main(){
    int mult[10]; 
    for (int i = 0; i < 10; i++)
    {
        mult[i] = 5 * (i+1); 
    }
    for (int i = 0; i < 10; i++)
    { 
        printf("5 X %d is %d\n", (i+1), mult[i]);
    }
    return 0;
}