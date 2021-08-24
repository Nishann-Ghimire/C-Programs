/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input your name and display using run time initilization
*/
#include <stdio.h>
int main()
{
    char name[5][30];
    printf("Enter name of five students\n");
    for (int i = 0; i < 5; i++)
    {
    gets(name[i]);
    }
    printf("The registered students are :\n");
      for (int j = 0; j < 5; j++)
    {
    puts(name[j]);
    }    
  
    return 0;
}