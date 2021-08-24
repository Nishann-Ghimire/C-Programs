/* Author: Nishan Ghimire 
Roll no : 210316
Question
Write a program to find whether the enter chracter is in lowercase , uppercase or special character
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   char letter;

   printf("Enter a character : ");
   scanf("%c",&letter);

   if(letter >= 65 && letter <= 90){
       printf("Your character is in Upper case");
   }else if (letter >= 97 && letter <= 122){
       printf("Your character is in lower case");
   }
    else if(letter >= 48 && letter <= 57){
    printf("Your character is a Digit");
}
   else{
       printf("Your character is a special symbol");
   }
 
 return 0; 
 }