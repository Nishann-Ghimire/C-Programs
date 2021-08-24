/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
/* WAP to print following pattern
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>
int a;
int main()
{
for(int i=5;i>=1;i++) //for rows
{
for(int j=1;j<=5;j++) //for column
{
if(i<=j) //condition which varies according to question
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}