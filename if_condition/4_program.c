/* Author: Nishan Ghimire 
Roll no : 210316
Question
To find the largest amoung three numbers
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int a,b,c;
 printf("Enter 1st number : ");
 scanf("%d",&a);
 printf("Enter 2nd number : ");
 scanf("%d",&b);
 printf("Enter 3rd number : ");
 scanf("%d",&c);
 //main code  
 if(a>b && a>c){
     printf("%d is largest number amoung three ",a);
 }else if(b>a && b >c){
     printf("%d is largest number amoung three ",b);
 }
 else if(c>a && c >b){
     printf("%d is largest number amoung three ",c);
 }else{
     printf("All number are equal");
 }
 return 0; 
 }