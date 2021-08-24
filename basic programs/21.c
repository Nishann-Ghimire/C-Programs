/* Author: Nishan Ghimire 
Roll no : 210316
Question
9.	Write a program to read the Principle, Time, and Rate and calculate the 
interest and total amount
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  float p,r,t,si,sum;
printf("Enter the Principle amount: ");
scanf("%f",&p);
printf("Enter the Rate amount: ");
scanf("%f",&r);
printf("Enter the Time amount: ");
scanf("%f",&t);


 //main code 
  si = (p*t*r)/1000;
 printf("The simple interest is : %f", si);
 printf("The total sum is : %f", si+p);

 return 0; 
 }