/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to calculate factorial of given number using Recursion
*/
# include<stdio.h>
 int fact(int n){
     if(n == 1){
         return 1; 
     }else{
        return n*fact(n-1);
     }
 }
 int main(){
   int num;
   printf("Enter a number : ");
   scanf("%d",&num);
   printf("The factorial is : %d",fact(num));
 return 0; 
 }