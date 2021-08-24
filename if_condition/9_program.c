/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/06/10
Question
WAP to find weather year is leap year or not. (A year that is exactly divisible
by four is a leap year, except for a year that is exactly divisible by 100 but, the
year is a leap year if it is exactly divisible by 400)
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int year;
  printf("Enter the year : ");
  scanf("%d",&year);

 //main code 
 if(year%4 == 0 && year%100 != 0 || year%400 == 0){
     printf("The year is leap year");
 } else{
     printf("The year is not leap year");
 }

 return 0; 
 }