// Question
/* Write a program that extracts part of the given string from the specified position.
For example, if the string is "Working with strings is fun",then if the position 4,4 characters
are to be extracted then the program should return string as "king". if the number of character to 
be extracted is 0 then the program should extract entire string from the specified position*/

#include <stdio.h>
#include <string.h>
void strcut(int pos, int num, char *str,char *newstr);
int main()
{
    char string[30] = "Working with string is fun";
    char newstring[30];
    strcut(4, 4, string,newstring);
    printf("%s",*newstring);
    return 0;
}
void strcut(int pos, int num, char *str, char *newstr)
{
    char cutstr[30];
    int count = pos - 1;
    int poscount = 0;
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if (i == count)
        {
            cutstr[poscount] = str[i];
            count++;
            poscount++;

            if (num == poscount)
            {
                cutstr[poscount] = '\0';
                break;
            }
        }
    }
  newstr = &cutstr;
}