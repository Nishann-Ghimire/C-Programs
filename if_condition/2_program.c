/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date : 2021/06/17
Question
2. WAP to find maximum of two number.
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int a,b;
   printf("Enter 1st number : " );
   scanf("%d",&a);
   printf("Enter 2nd number : " );
   scanf("%d",&b);
 //main code  
    if(a>b){
        printf(" %d is greater than %d",a,b);
    }else{
        printf(" %d is greater than %d",b,a);
    }
 return 0; 
 }