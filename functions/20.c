/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to print sum of natural numbers using recursion
*/
# include<stdio.h>
int add(int);
 int main(){
     int num;
   printf("Enter a number : ");
   scanf("%d",&num);
   printf("The sum is : %d",add(num));
 return 0; 
 }
 int add(int n){
     if(n == 1)
     return 1;
     else
     return n+add(n-1);
 }