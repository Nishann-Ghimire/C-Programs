/* 
Author: Nishan Ghimire
Roll no : 210316
Question
4.	Write a program to calculate the result of cb3/d2. (Read the value of c, b,d from the user).
*/

# include<stdio.h>
# include<math.h>
 int main(){
   //  Declaring variables and taking inputs
   int a,b,c,d;
  printf("Enter first number b: ");
  scanf("%d",&b);
  printf("Enter second number c: ");
  scanf("%d",&c);
  printf("Enter third number d: ");
  scanf("%d",&d);
  //  performing calculation
  a = (pow(b,3)*c)/pow(d,2);
  // displaying results
 printf("The result is : %d",a);
 return 0; 
 }