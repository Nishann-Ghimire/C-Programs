/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a menu driven program which has the following options
1) Factorial of a number 
2) Prime or not
3) Odd or even
4) Exit
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    //Declaring variable and taking inputs
    int num, menu_number = 4, end = 0;
    //variable for factorial number
    int factorial;
    //variable for prime number
    int count = 0;

    //  infinite loop only ends when user wants to end

    while (end == 0)
    {

        system("cls"); //for clearing screen
        printf("\t\t\tWelcome to Software menu center\n\n");
        printf("Choose any options below by their number according to your purpose:\n ");
        printf("1. Find the factorial of a number \n");
        printf("2. To check weather a number is prime or not\n");
        printf("3. Find weather a number is even or odd\n");
        printf("4. Exit\n\n");
        printf("Enter your choice in number (like 1,2,3 or 4) : ");
        scanf("%d", &menu_number);

        switch (menu_number)
        {
        case 1:
            printf("Enter the number : ");
            scanf("%d", &num);
            factorial = 1;
            for (int i = 1; i <= num; i++)
            {
                factorial *= i;
            }
            printf("Factorial of given input is %d\n", factorial);
	    printf("Press any key to continue...");
            getch(); //pausing output screen
            break;
        case 2:
            printf("Enter the number : ");
            scanf("%d", &num);
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                    count++;
            }
            if (count <= 1)
                printf("The number is Prime number\n");
            else
                printf("The number is not the prime number\n");
            
		printf("Press any key to continue...");
		getch(); //pausing output screen
            break;
        case 3:
            printf("Enter the number : ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("The number is even\n");
            else
                printf("The number is odd\n");
	printf("Press any key to continue...");
            getch(); //pausing output screen
            break;
        default:
            end = 1; // making the loop condition false to get out of it
            printf("Thank you for joining us\n");
            printf("Press any key to exit!!");
            break;
        }
    }
    return 0;
}