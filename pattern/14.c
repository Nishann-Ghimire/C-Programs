/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
    *
   ***
  *****  
*/
#include <stdio.h>
int main()
{

    //main code
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j >= 2 - i && j <= 2 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}