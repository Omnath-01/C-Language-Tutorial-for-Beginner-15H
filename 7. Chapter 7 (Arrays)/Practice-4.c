// Q.4 Repeat Q3 for a general input provided by user 

#include<stdio.h>

int main(){
    int mult[10]; 
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        mult[i] = n * (i+1); 
    }
    for (int i = 0; i < 10; i++)
    { 
        printf("%d X %d is %d\n", n, (i+1), mult[i]);
    }
    return 0;
}