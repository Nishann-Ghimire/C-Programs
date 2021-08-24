/* Author: Nishan Ghimire 
Roll no : 210316
Question
12.	Write a program to read the weight in gram and convert it to Kilogram and gram.
(e.g.  2076 gram= 2 Kilogram, 76 gram)

*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int gram,kg,g;
  printf("Enter the weight in gram : ");
  scanf("%d",&gram);

 //main code
 kg = gram/1000;
 g = gram%1000;
 printf("The weight is %d kg %d gram",kg,g);  
 return 0; 
 }