
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    while (a < 10)
    // a = 11
    //while (a >10) -->These two line will lead to an infinte loop
    {
        printf("%d\n", a);
        a++;
        // printf("%d\n", a); a++;   // valid
    }

    return 0;
}