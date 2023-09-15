// Q.6 write a program to encrypt a string by adding 1 to the ascii of its charcater
#include <stdio.h>
void encryptc(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char c[] = "code with Harry";
    encryptc(c);
    printf("Encrypted the string is %s", c);
    return 0;
}