/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date : 2021/06/17
Question
3. WAP to find if number is positive or negative
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
 int num;
 printf("Enter a number : ");
 scanf("%d",&num);

 //main code
 if(num > 0){
     printf("The number is positive");
 }else{
     printf("The number is negative");
 }  
 return 0; 
 }
