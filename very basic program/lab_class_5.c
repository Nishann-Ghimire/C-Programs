/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 5/17/2021
Question
5. Write a program in C to find Size of fundamental data types.
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
float a;
printf("Enter first number : ");
scanf("%d",&a);


// Displaying output to user
printf("The size of datatype is : %d\n",sizeof(a));  
 
 return 0; 
 }