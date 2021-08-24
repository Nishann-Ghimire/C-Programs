/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Write a menu-driven program using Switch case to calculate the following:
G,g Green
B,b Blue
R,r Red
e Exit
other wise Black
*/
# include<stdio.h>
# include<stdlib.h>
 int main(){
int k;
char choice;
float a,b;

while (1)
{
  
printf("\n\t\tMain Menu\n");
printf("G/g ==> Green\nB/b ==> Blue\nR/r ==> Red\ne/E ==> Exit\nOther wise Black\n");
printf("Enter your choice: ");
fflush(stdin);
scanf("%c",&choice);    
switch (choice)
{
case 'G':
case 'g':
   printf("Green");
    break;
case 'B':
case 'b':
     printf("Blue");
    break;
case 'R':
case 'r':
    printf("Red");
    break;
case 'E':
case 'e':
    exit(0);
    break;

default:
    printf("Black");
    break;
}
}   
 return 0; 
 }