/* 
Question
WAP to  implement strupr() and strlwr()
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string1[30]; 
    char string2[30];
    printf("Enter first String : ");
    gets(string1);
    printf("Enter second String : ");
    gets(string2);
    strlwr(string1);
    strupr(string2);
    printf("First string is converted to lowercase : %s\n",string1);
    printf("Second string is converted to Uppercase : %s\n",string2);

    
}