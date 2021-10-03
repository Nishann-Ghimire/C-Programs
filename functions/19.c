/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Find factorial of a number using Recursive Function
*/
# include<stdio.h>
int factorial(int);

 int main(){
     int num, fac =1;
     printf("Enter a number : ");
     scanf("%d",&num);
     printf("The factorial of %d is %d",num,factorial(num));
 return 0; 
 }
 int factorial(int n){
    if(n == 1)
    return 1;
    else
    return n*(factorial(n-1));
 }