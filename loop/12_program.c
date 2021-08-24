/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to print sum of n natural number
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int num,i = 1,sum = 0;
   printf("Enter a number : ");
   scanf("%d",&num);

 //main code
   while (i <= num)
   {
    sum += i; 
    i++;  
   }
     printf("The sum is : %d",sum);
 return 0; 
 }