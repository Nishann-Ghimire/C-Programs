/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int num1,num2,sum_even = 0,sum_odd = 0;
   printf("Enter a 1st number : ");
   scanf("%d",&num1);
   printf("Enter a 2nd number : ");
   scanf("%d",&num2);
 //main code
 for(int i = num1; i <= num2; i++){
     if(i%2 == 0){
         sum_even += i;
     }else{
         sum_odd += i;
     }
 }  
 printf("Total sum of even number is : %d\n",sum_even);
 printf("Total sum of odd number is : %d",sum_odd);
 return 0; 
 }