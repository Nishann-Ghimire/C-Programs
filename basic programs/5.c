/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/21
Question
WAP to calculate the simple interest and total amount , taking principal, rate, and time 
as a input from user 
*/
#include <stdio.h>
int main()
{
    //Declaring variable and taking inputs
    float si, p, t, r, a;
    printf("Enter the principle amount: ");
    scanf("%f", &p);
    printf("Enter the Rate : ");
    scanf("%f", &r);
    printf("Enter the Time : ");
    scanf("%f", &t);
    //  calculation
    si = (p * t * r) / 1000;
    a = si + p;
    // Displaying output
    printf("Simple interest for your given values is : %f", si);
    printf("Total amount for your given values is : %f", a);
    return 0;
}