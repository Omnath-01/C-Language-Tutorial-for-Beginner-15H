// Q.3 write a program to calculate force of attracttion
// on a body of mass m excute by earth 

#include <stdio.h>
float force(float mass);

int main()
{
    float m;
    printf("Enter the value of mass in kgs : ");
    scanf("%f",&m);
    printf("The value of force in Newton is %.2f\n",force(m));
    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}