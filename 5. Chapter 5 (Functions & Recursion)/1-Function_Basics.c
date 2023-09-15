
#include <stdio.h>
void display(); // Function prototype
int main()
{
    int a;
    printf("Intializing display function\n");
    display(); // Function call
    printf("Display function finished its work\n");
    return 0;
}

void display()
{   // Function definition
    printf("Hi I am display \n");
}
