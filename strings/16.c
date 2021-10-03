/* 
Question
WAP to  comparing of two string
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string1[30]; 
    char string2[30];
    int num;
    printf("Enter first String : ");
    gets(string1);
    printf("Enter second String : ");
    gets(string2);
    num = strcmp(string1,string2);
    if(num == 0)
    printf("Strings are same");
    else
    printf("String are not same");
    return 0;
}