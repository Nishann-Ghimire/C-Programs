// Question
// WAP to input string and copy  it into another in reverse order
#include <stdio.h>
int main()
{
    char strSource[100];
    char strTarget[100];
    int length = 0;
    int i = 0;
    printf("Enter the string : ");
    gets(strSource);
    for (i = 0; i < strSource[i] != '\0'; i++)
    {
        length++;
    }

    for (i = 0; i < length; i++)
    {
        strTarget[i] = strSource[length - i - 1];
    }
    strTarget[length] = '\0';
    printf("Copied String in reverse order : %s", strTarget);
    return 0;
}