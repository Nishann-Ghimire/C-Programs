/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/21
Question
WAP to Convert Celsius to Fahrenheit
*/
#include <stdio.h>
int main()
{
   //Declaring variable and taking inputs
   float f, c;
   printf("Enter the value in celsius : ");
   scanf("%f", &c);
   // calculations
   f = ((c / 5) * 9) + 32;
   // Displaying the results
   printf("The value in Fahrenheit is : %f", f);
   return 0;
}