// Q.8 repeat Q7 for a custum input given by the user

#include<stdio.h>
void printTable(int *mulTable, int num, int n)
{
     for (int i = 0; i < n; i++)
    {
        mulTable[i] = num*(i+1);
    }
    for (int i = 0; i < n; i++) // For Columns
    { 
        printf("%d x %d = %d\n",num ,i+1, mulTable[i]);
    }
    printf("***********************************\n");
}
int main(){
    int mulTable[3][10];
    //printf("Enter the value ");
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);
    return 0;
}
