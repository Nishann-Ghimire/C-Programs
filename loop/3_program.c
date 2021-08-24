/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/06/17
Question
WAP to print sum of n natural numbers
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
 int num,sum = 0;
 printf("Enter a number: ");
 scanf("%d",&num);

//main code  
for(int i = 1; i<= num; i++){
     sum += i;
}
 printf("Total sum is : %d",sum);
 return 0; 
 }