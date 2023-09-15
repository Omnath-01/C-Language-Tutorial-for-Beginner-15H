// Q.7 write a program to decrypt an encrypted string using encrypt function in Q6

#include <stdio.h>
void decryptc(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[] = "hajiojd";
    decryptc(c);
    printf("Decrypted the string is %s", c);
    return 0;
}