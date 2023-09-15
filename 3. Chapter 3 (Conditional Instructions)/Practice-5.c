// Q.5 write a program to determine a charcter entered by the user is lowercase  .. or not

#include <stdio.h>
int main()
{
    // 97-122=a-z
    char cha;
    printf("Enter your character\n");
    scanf("%c", &cha);
    if(cha>=97 && cha<=122){
        printf("Yes, this is a lowercase character");
    }
    else{
        printf("No, this is not a lowercase character");
    } 
    return 0;
}