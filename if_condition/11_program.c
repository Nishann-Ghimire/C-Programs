/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/06/11
Question
WAP to find weather year is leap year or not. (A year that is exactly divisible
by four is a leap year, except for a year that is exactly divisible by 100 but, the
year is a leap year if it is exactly divisible by 400)
*/
#include<stdio.h>
int main ()
{
int year;
printf("Enter a year to check: ");
scanf("%d",&year);
if(year%100==0)//century year
{
if(year%400==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}
}
else//non century year
{
if(year%4==0)
{
printf("Leap year");
}
else
{
printf("not a leap year");
}
}
return 0;
}