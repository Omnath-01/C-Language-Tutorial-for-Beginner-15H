// Q.4 write a function slice() to slice a string . 
//     it should changethe original string such that it is nowthe sliced string 
//     Take "m" and "n" as the start and ending position for slice

#include<stdio.h>
void slice(char *st,int m, int n)
{
    int i=0;
    while((m+i)<n)
    {
        st[i] = st[i+m];
        i++;
    }
    st[i]='\0';
}
int main(){
    char st[] = "Harry with";
    slice(st, 1, 6);
    printf("%s",st);
    return 0;
}