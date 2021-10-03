/* 
Question
WAP to  copy content of one string to another
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char source[30],target[10];
    printf("Enter a string : ");
    gets(source);
    strcpy(target, source);
    printf("Copied String : ");
    puts(target);
    return 0;
}