/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to sum natural number using recursion
*/
# include<stdio.h>
 int sum(int n){
     if(n == 0){
         return 0; 
     }else{
        return n+sum(n-1);
     }
 }
 int main(){
   int num;
   printf("Enter a number : ");
   scanf("%d",&num);
   printf("The sum is : %d",sum(num));
 return 0; 
 }