/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)

*/
#include <stdio.h>
int main()
{
    //Declaring variable and taking inputs
    int match_stick = 21, num, rannum, condition = 0;
    printf("Rules : \n");
    printf("1. You can choose number between 1 to 4\n");
    printf("2. You will lose if you are last to choose number\n\n");
    printf("*************** START THE GAME ****************\n");
    //main code
    do
    {
        // printing available match stick
        printf("Available Matchsticks %d : ", match_stick);
        //  Asking choice to user
        printf("Enter your choice : ");
        scanf("%d", &num);
        match_stick -= num;
        // user looses if he has last choice
        if (match_stick == 0)
        {
            printf("You loose the game and I win :)");
            condition = 1;
        }
        // Decision tree for choosing value
        if (match_stick == 10 || match_stick == 5)
        {
            match_stick -= 4;
        }
        else if (match_stick == 9 || match_stick == 4)
        {
            match_stick -= 3;
        }
        else if (match_stick == 8 || match_stick == 3)
        {
            match_stick -= 2;
        }
        else if (match_stick == 7 || match_stick == 6 || match_stick == 2 || match_stick == 1)
        {
            match_stick -= 1;
        }
        else if (match_stick > 10 && match_stick < 21)
        {
            if (match_stick % 2 == 0)
            {
                match_stick -= 4;
            }
            else
            {
                match_stick -= 3;
            }
        }
        else if (match_stick == 0 && condition == 0)
        { //Decision if computer looses
            printf("You win and I loose :(");
        }
    } while (match_stick > 0);
    return 0;
}