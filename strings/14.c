/* 
Question
WAP to reverse a string
*/
# include<stdio.h>
# include<string.h>
 int main(){
  
    char name[30];
    printf("Enter a string : ");
    gets(name);
    strrev(name);
    printf("Reversed String : %s\n",name);
 return 0; 
 }