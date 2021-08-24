/* Author: Nishan Ghimire 
Roll no : 210316
Question
Program to find largest amoung three numbers
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int a,b,c;
   printf("Enter the 1st number : ");
   scanf("%d",&a);
   printf("Enter the 2nd number : ");
   scanf("%d",&b);
   printf("Enter the 3rd number : ");
   scanf("%d",&c);
 //main code  
if(a>b){
    if(a>c){
        printf("%d is the largest number",a);
    }else{
        printf("%d is the largest number",c);
    }
}else{
    if(b>c){
        printf("%d is the largest number",b);
    }else{
        printf("%d is the largest number",c);
    }
}
 return 0; 
 }