/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to find whether a number is palindrom or not 
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int rev = 0,num,n,rem;
printf("Enter a multi digit number: ");
scanf("%d",&n);
num = n;
 //main code
 while (n>0)
 {
    rem = n%10;
    rev = rev*10 + rem;
    n /= 10;
 }
 if(num == rev){
     printf("The number is palindrome");
 }else{
     printf("The number is not palindrome");
 }
  
 return 0; 
 }