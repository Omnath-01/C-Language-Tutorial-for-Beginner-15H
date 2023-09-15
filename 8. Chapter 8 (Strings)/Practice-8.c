// Q.8 write a program to count the occurrence of a given charcater  in string

#include <stdio.h>
int occurrence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Harry";
    int count = occurrence(st, 'H');
    printf("Occurencees = %d", count);
}