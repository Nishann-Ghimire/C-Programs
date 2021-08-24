/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to count the digits of a numbers
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int num,count = 0;
  printf("Enter a number : ");
  scanf("%d",&num);

 //main code
 while (num != 0)
 {
     count+=1;
     num /= 10;

 }
   printf("The number of digits : %d",count);
 return 0; 
 }