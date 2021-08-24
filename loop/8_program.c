/* Author: Nishan Ghimire 
Roll no : 210316(CE/D)
Date: 2021/06/18
Question
WAP to print numbers from 1 to 100 which are divisible by 5 and 
print the sum
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int sum = 0;
 //main code 
 for(int i = 1; i <= 100; i++){
 if(i%5 == 0) //Checking is the number divisible by 5
 {
 printf("%d\n",i); 
 sum+=i;
 }
 } 
 printf(" Total sum of numbers is : %d",sum);
 return 0; 
 }