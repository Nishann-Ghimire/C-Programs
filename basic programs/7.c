/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/24
Question
Write a program to calculate the real and equal roots of a quadratic equation.*/
#include <stdio.h>
int main()
{
    //Declaring variable and taking inputs
    int r1, a, b;
    printf("Enter first cofficient : ");
    scanf("%d", &a);
    printf("Enter second cofficient : ");
    scanf("%d", &b);
    r1 = -b / (2 * a);
    printf("The euual root is : %d", r1);
    return 0;
}