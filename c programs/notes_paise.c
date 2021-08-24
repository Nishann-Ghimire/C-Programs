/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
#include <stdio.h>
int main()
{
    //Declaring variable and taking inputs
    int z, remainder;
    printf("Please Enter the amount: ");
    scanf("%d", &z);
    //Performing logical analysis and calculations
    remainder = z / 100;
    printf("The no of 100 notes required : %d\n", remainder);
    z = z % 100;
    remainder = z / 50;
    printf("The no of Rs 50 notes required : %d\n", remainder);
    z = z % 50;
    remainder = z / 10;
    printf("The no of Rs 10 notes required : %d\n", remainder);
    z = z % 10;
    remainder = z / 5;
    printf("The no of Rs 5 notes required : %d\n", remainder);
    z = z % 5;
    remainder = z / 2;
    printf("The no of Rs 2 notes required : %d\n", remainder);
    z = z % 2;
    printf("The no of Rs 1 notes required : %d\n", z);

    return 0;
}