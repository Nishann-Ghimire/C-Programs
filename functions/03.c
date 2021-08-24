/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a function to find the factorial of a number
*/
# include<stdio.h>
int factorial(int n);
 int main(){
     int num;
     printf("Enter a number : ");
     scanf("%d",&num);
     printf("The factorial of %d is %d",num,factorial(num));
 return 0; 
 }
 int factorial(int n){
     int factorial = 1;
     for (int i = 1; i <= n; i++)
     {
         factorial *= i;
        
     }
      return factorial;
 }