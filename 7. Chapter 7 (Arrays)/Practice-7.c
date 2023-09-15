// Q.7 create a array of size 3x10 containing multiplication table of the 
//     number 2, 7 and 9 respectively
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
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);
    return 0;
}

// code for multiplication table 2
// int mulTable[3][10];
// for (int i = 0; i < 10; i++)
//     {
//         mulTable[0][i] = 2*(i+1);
        
//     }
//     for (int i = 0; i < 10; i++) // For Columns
//     { 
//         printf("2 x %d = %d\n",i+1, mulTable[0][i]);
//     }