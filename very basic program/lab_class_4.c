/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 5/17/2021
Question
4. Write a program to read the value of two variables, and compute sum, difference, and product.
*/
# include<stdio.h>
 int main(){
//Declaring variables and taking inputs
int a,b,sum,sub,product;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);

// Performing calculations
sum = a + b;
sub = a - b;
product = a * b;

// Displaying output to user
printf("The sum of two number given by user is : %d\n",sum);  
printf("The different of two number given by user is : %d\n",sub);  
printf("The product of two number given by user is : %d\n",product);  
 return 0; 
 }