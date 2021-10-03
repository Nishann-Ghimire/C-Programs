/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char names[5][20], temp[20];
    int i, j, n;
    printf("Enter number of names you want to enter : ");
    scanf("%d", &n);

    printf("Enter names here :");
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        gets(names[i]);
    }
    //Sorting names
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - 1 - i; j++) 
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("The names are entered here are :\n");
    for (i = 0; i < n; i++)
    {
        puts(names[i]);
    }

    return 0;
}
