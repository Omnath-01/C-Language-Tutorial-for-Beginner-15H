// Q.2 write a program to generate multiplication table of a given number
//     int txt format make sure that the file is readable and well formatted
#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("Enter the integer you need the table of \n");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    printf("successfully generated table of %d to table.txt\n",num);
    return 0;
}