// Q.2 write Program to find whether student is pass or fail
// if it require total 40% and at least 33% in each subject to pass
// assume 3 subjects and take marks as input

#include <stdio.h>
int main()
{
    int Physics, Chemistry, Maths, Total;
    printf("Enter Physics Maarks\n");
    scanf("%d", &Physics);

    printf("Enter Chemistry Maarks\n");
    scanf("%d", &Chemistry);

    printf("Enter Maths Maarks\n");
    scanf("%d", &Maths);
    Total = (Physics + Chemistry + Maths) / 3;
    if ((Total < 40) || Physics < 33 || Maths < 33 || Chemistry < 33)
    {
        printf("Your total percentage is %d ans you are failed\n", Total);
    }
    else
    {
        printf("Your total percentage is %d ans you Pass\n", Total);
    }
    return 0;
}
