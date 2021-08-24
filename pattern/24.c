/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print the pattern:
A
BA
CBA
DCBA
*/
# include<stdio.h>
 int main(){
   for (int i = 4; i >= 1; i--)
   {
       for (int j = 5-i; j > 0; j--)
       {
            printf("%c",j+64);
       }
       printf("\n");
   }
   
 return 0; 
 }