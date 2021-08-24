/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date : 2021/06/17
Question
1. WAP to check weather number is odd or even
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
 int num;
 printf("Enter a number : ");
 scanf("%d",&num);

 //main code
 if(num%2 == 0){
     printf("The number is even");
 }else{
     printf("The number is odd");
 }  
 return 0; 
 }
