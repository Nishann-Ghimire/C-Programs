/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to print following pattern:
*
**
***
****
*****
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   for(int i = 1; i <= 5; i++){
       for(int j = 1; j <= i; j++){
           printf("*");
       }
       printf("\n");
   }
 //main code  
 return 0; 
 }