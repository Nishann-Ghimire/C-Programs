/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
/* WAP to print following pattern
    *
   ** 
  ***
 ****
*****

*/

#include <stdio.h>
int main()
{
for(int i=1;i<=5;i++) //for rows
{
for(int j=1;j<=5;j++) //for column
{
if(j>=6-i) //condition which varies according to question
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}