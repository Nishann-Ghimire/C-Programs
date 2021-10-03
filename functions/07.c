/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a function with no return type and argument to add two number
*/
# include<stdio.h>

 void add();
 int main(){

add();
 return 0;
 }
//  Sum Function
void add(){
   int x,y,z;
   printf("Enter any two number");
   scanf("%d%d",x,y);
    z = x + y;
   printf("%d",z);
}