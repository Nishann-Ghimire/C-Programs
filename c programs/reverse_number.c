/*
Author : Nishan Ghimire
Roll no : 16
 Question
if a five digits number is input through the keyboard, WAP to program to
reverse its digits.
*/


# include<stdio.h>
 int main(){
  // Declaring variables
  int a,b,i,j,rev;
  rev = 0;
  j = 10000;
// asking user for input  
  printf("Note this program works for five digits number\n");
  printf("Enter a number of five digits: ");
  scanf("%d",&a);
  while(a>0) // Starting loop
  {
  b = a%10; //taking out last digit from given input

  //   multiplying the last digit with 10000 which is defined above to take last number to first and same 
  //   step for second variable
  rev += b * j; 

  a=a/10; //reducing a to four digits by removing last term

  j=j/10; // also reducing j by ten to decrease its place value by 1
  }
  printf("%d",rev);
 return 0; 
 }