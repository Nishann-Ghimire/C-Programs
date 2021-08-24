/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to check whether a number is prime numbr or not
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int num,count = 0,i = 1;
  printf("Enter a number :"); 
  scanf("%d",&num);
 //main code  
   while(i < num){
       if(num%i == 0){
           count++;
       }
   }
   if(count > 1){
       printf("The number is not a prime number");
   }else{
       printf("The number is a prime number");
   }
 return 0; 
 }