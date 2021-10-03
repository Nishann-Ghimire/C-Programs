/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Function with no argument and return type
*/
# include<stdio.h>
int sum();
 int main(){
   printf("Your sum is : %d",sum());
 return 0; 
 }
 int sum(){
     int a,b,c;
     printf("Enter two number : ");
     scanf("%d%d",&a,&b);
     c = a+b;
     return c;
 }