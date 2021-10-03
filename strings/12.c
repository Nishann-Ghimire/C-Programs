/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
String concatenation
*/
#include <stdio.h>
int main()
{
    char str1[10], str2[10], str[10];
    int i, j;
    printf("Enter first String : ");
    gets(str1);

    printf("Enter second String : ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
        str[i] = str1[i];

    for (j = 0; str2[j] != '\0'; j++)
        str[i + j] = str2[j];

    str[i + j] = '\0';
    printf("Final Result : %s", str);

    return 0;
}