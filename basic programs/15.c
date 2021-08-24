/* 
Author: Nishan Ghimire
Roll no : 210316
Question
3.	Write a program to read the value of two variables, and compute sum, difference, and 
product.
*/


# include<stdio.h>
 int main(){
    //  Declaring variables and taking inputs
  int a,b,sum,diff,product;
  printf("Enter first number: ");
  scanf("%d",&a);
  
  printf("Enter second number: ");
  scanf("%d",&b);
  //  performing calculation
sum = a+b;
diff = (a>b)?(a-b):(b-a);
product = a * b;
  // displaying results
printf("\nThe sum is : %d\n", sum);
printf("The difference is : %d\n", diff);
printf("The product is : %d\n", product);


 return 0; 
 }