/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int num,sum = 0;
   printf("Enter a number ");
   scanf("%d",&num);

 //main code
 for(int i = 1; i <= num; i++){
     if(i%2 == 0){
         sum += i;
     }
 }  
 printf("Total sum of even number is : %d",sum);
 return 0; 
 }