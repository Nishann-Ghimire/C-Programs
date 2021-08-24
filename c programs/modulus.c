/*
Author : Nishan Ghimire
Roll no : 16
 Question
if a five digits number is input through the keyboard, WAP to program to
calculate the sum of its digits.
*/

// including header files
# include<stdio.h>

 int main(){
// Declaring variables
  int a,b,sum;
  sum = 0;
// asking user for input  
  printf("Enter a number of five digits: ");
  scanf("%d",&a);
//   looping to take out every digits and adding to variable sum
  while (a>0)
  {
      b = a%10;
      sum = sum + b;
      a = a/10;
  }
//   printing the final value
  printf("%d",sum);
 return 0; 
 }