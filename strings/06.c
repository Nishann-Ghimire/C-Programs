/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to count the number of vowels
*/
# include<stdio.h>
 int main(){
   char word[100];
   int count = 0;
   printf("Enter your words : ");
   gets(word);
   for(int i = 0;word[i]!='\0';i++){
      switch (word[i])
      {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
          count++;
          break;
      }
   }
   printf("There are %d vowels",count);
 return 0; 
 }