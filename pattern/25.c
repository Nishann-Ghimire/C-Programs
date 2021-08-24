/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
    *
   * *
  * * * 
 * * * *  

   *
  ***
 *****
*******

*/
#include <stdio.h>
int main()
{
 int k = 0;
    //main code
    for (int i = 0; i < 3; i++)
    {
        k=0;
        for (int j = 0; j < 6; j++)
        {
            
            if (j >= 2 - i && j <= 2 + i)
            {

                if(k == 0){
                printf("*",k);
                k=1;
                }else{
                printf(" ",k);
                k=0;    
                }
                
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

