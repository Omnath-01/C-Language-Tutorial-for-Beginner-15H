// Q.3 Calculate income tax paid by an employee to the goverment as per slab mention below
// Income slab   Tax
// 2.5L-50L      5%
// 5.0L-10L      20%
// above 10.0L   30%
// note that no taz below 2.5L
// take income as input

#include <stdio.h>
int main()
{
    float tax = 0, income;
    printf("Enter your income : ");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {

        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {

        tax = tax + 0.30 * (income - 500000);
    }
    printf("Your net income tax to be paid by this month is : %f\n", tax);
    return 0;
}

// printf("Your income is between than 2.5 Lakhs and 5 lakhs");
// printf("Your income is between than 5 Lakhs and 10 lakhs");