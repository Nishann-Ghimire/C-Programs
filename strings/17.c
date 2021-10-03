/* 
Question
WAP to  concatenation of two string
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
    strcat(string1,string2);
    puts(string1);

    return 0;
}