/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to find the length of strings
*/
# include<stdio.h>
 int main(){
   char name[30];
   int count = 0;
   printf("Enter your name : ");
   gets(name);
   for(int i = 0;name[i]!='\0';i++){
       count++;
   }
   printf("The length of string is : %d",count);
 return 0; 
 }