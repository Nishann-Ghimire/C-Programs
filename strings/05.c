/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to find the number of words
*/
# include<stdio.h>
 int main(){
   char word[100];
   int count = 0;
   printf("Enter your word : ");
   gets(word);
   for(int i = 0;word[i]!='\0';i++){
       if(word[i] == ' ')
       count++;
   }
   printf("There are %d words",count+1);
 return 0; 
 }