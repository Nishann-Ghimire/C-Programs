/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to reverse a number 
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int rev = 0,n,rem;
printf("Enter a multi digit number to reverse : ");
scanf("%d",&n);

 //main code
 while (n>0)
 {
    rem = n%10;
    rev = rev*10 + rem;
    n /= 10;
 }
   printf("The reverse of given number is : %d",rev);
 return 0; 
 }