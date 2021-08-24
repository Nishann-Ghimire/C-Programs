/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print the Grade of student
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   float p;
   printf("Enter your percentage: ");
   scanf("%f",&p);

 //main code
 if(p >= 80){
     printf("Congratulation you have scored 'A' ");
 }else if(p >= 70 && p < 80){
      printf("Keep it up you have scored 'B' ");
 }  
 else if(p >= 60 && p < 70){
      printf("Well done you have scored 'C' ");
 }  
 else if(p >= 50 && p < 60){
      printf("Please work hard you have scored 'D' ");
 }  else{

      printf("Sorry you have failed ");
 }
 return 0; 
 }