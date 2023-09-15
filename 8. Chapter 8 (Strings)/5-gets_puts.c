#include<stdio.h>
int main()
{
    char s[34];
    printf("Enter your Name : ");
    gets(s);
    puts(s);
    printf("Your name is %s ",s);
    return 0;
}