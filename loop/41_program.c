/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to print Compount interest for ten different values
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
   float p,n,r,q,a = 1;

 //main code
    for (int i = 1; i <= 10; i++)
    {
   printf("Enter principal amount : ");
   scanf("%f",&p);
   printf("Enter Rate : ");
   scanf("%f",&r);
   printf("Enter years : ");
   scanf("%f",&n);
   printf("Enter number of compounding periods: ");
   scanf("%f",&q);
        a = p * (pow(1+r/q,n*q));
        printf("amount : %f\n",a); 
    }
    
 return 0; 
 }