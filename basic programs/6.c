/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/21
Question
Calculate the mass of air in an automobile tire, using the formula PV=0.37m(T+460)
Where P=Pressure, V= Volume, m=mass, T= Temperature
Read the value of P, V, T from the keyboard.
*/
#include <stdio.h>
int main()
{
    //Declaring variable and taking inputs
    float m, v, p, t;
    printf("Enter value for Volume : ");
    scanf("%f", &v);
    printf("Enter value for Temperature : ");
    scanf("%f", &t);
    printf("Enter value for Pressure : ");
    scanf("%f", &p);
    // calculation
    m = (p * v) / (t + 460) * 0.37;
    // Displaying value
    printf("The mass is : %f",m);
    return 0;
}