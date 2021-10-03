/* 
Question
WAP to count character in a string
*/
# include<stdio.h>
# include<string.h>
 int main(){
  
    char name[30];
    int num;
    printf("Enter a string : ");
    gets(name);
    num = strlen(name); 
    printf("The number of character is : %d\n",num);
 return 0; 
 }