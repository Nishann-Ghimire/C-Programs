/* Author: Nishan Ghimire 
Roll no : 210316
Question
To find the largest amoung three numbers
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int a,b,c,d;
 printf("Enter 1st number : ");
 scanf("%d",&a);
 printf("Enter 2nd number : ");
 scanf("%d",&b);
 printf("Enter 3rd number : ");
 scanf("%d",&c);
 printf("Enter 4rd number : ");
 scanf("%d",&d);
 //main code  
 if(a>b && a>c && a>d){
     printf("%d is largest number amoung three ",a);
 }else if(b>c && b>d){
     printf("%d is largest number amoung three ",b);
 }
 else if(c>d){
     printf("%d is largest number amoung three ",c);
 }else{
     printf("%d is the largest number ",d);
 }
 return 0; 
 }