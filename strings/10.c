// WAP to input string and change uppercase to lowercase and lowercase to uppercase
#include <stdio.h>
int main()
{
    char strSource[100];
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
        if (strSource[i] <= 'z' && strSource[i] >= 'a')
            strSource[i] = strSource[i] - 32;

        else if (strSource[i] <= 'Z' && strSource[i] >= 'A')
            strSource[i] = strSource[i] + 32;
    }

    printf("Output : %s", strSource);
    return 0;
}



