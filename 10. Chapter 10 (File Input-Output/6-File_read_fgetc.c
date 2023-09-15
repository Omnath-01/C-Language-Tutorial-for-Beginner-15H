#include <stdio.h>
int main()
{
    FILE *ptr;
    char c;
    // // fgta demo for reading a file
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
  
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}