/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to check string is palindrome or not
*/
# include<stdio.h>
# include<string.h>
 int main(){
   char string1[10],string2[10];
   printf("Enter a string : ");
   gets(string1);
   strcpy(string2,string1);
   if(strcmp(string1,string2) == 0){
       printf("It is Palindrome");
   }else{
       printf("It is not Palindrome ");
   }

 return 0; 
 }