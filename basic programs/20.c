/* Author: Nishan Ghimire 
Roll no : 210316
Question
8.	Write a program to read the temperature in Centigrade and convert it to
 Farenhite equivalent (Hint F=1.8C+32)
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  float c,f;
  printf("Enter the temperature in celcius: ");
  scanf("%f", &c);
  
 //main code
f = (1.8*c)+32;
printf("The temperature in Fahenheit is : %f",f);
 return 0; 
 }