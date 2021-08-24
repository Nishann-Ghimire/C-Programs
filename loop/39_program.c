/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to generate all combinations of 1,2,3 using for loop
*/
# include<stdio.h>
 int main(){
   
 //main code
 for (int i = 1; i <= 3; i++)
 {
     for (int j = 1; j <= 3; j++)
     {
         for (int k = 1; k <= 3; k++)
         {
             printf("%d%d%d\n",i,j,k);
         }
         
     }
     
 }
   
 return 0; 
 }