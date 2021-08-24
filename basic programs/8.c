/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/05/26
Question
WAP to find the largest of the two numbers using conditional operator.
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int a,b;
   printf("Enter the first number: ");
   scanf("%d",&a);
   printf("Enter the second number: ");
   scanf("%d",&b);
// Checking condition and displaying output
   (a>b)?printf("%d is greater than %d ",a,b):printf("%d is greater than %d ",b,a);
   return 0; 
 }
