/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to check is the number is palindrome or not
*/
# include<stdio.h>
#include<math.h>
 int main(){
//Declaring variable and taking inputs
   int n,num=0,a,rem,i=0;
   printf("Enter a number : ");
   scanf("%d",&n);

 //main code 
   a = n;
   while (n > 0)
   {
    rem = n % 10;
     printf("%d\n",rem);
    num = num + rem*pow(10,i);
    n = n/10;
   }
   printf("%d\n",num);
   if(a == num){
       printf("The number is palindrome");
   }else{
       printf("The number is not palindrome");
   }   
 return 0; 
 }