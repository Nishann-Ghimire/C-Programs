/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a C program to create Simple Calculator using switch case.

*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    //Declaring variable and taking inputs
    int div, sub, num, end = 0;
    // variables for sum
    int num1, num2;

    while (end == 0)
    {
        system("cls");
        printf("\t\twelcome to simple calculator");
        printf("Which function do you want : \n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter the number of your option : ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);
            printf("your sum is : %d", num1 + num2);
            getch();
            break;
        case 2:
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);
            sub = (num1 > num2) ? num1 - num2 : num2 - num1;
            printf("The Difference is : %d", sub);
            getch();
            break;
        case 3:
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);
            printf("your product is : %d", num1 * num2);
            getch();
            break;
        case 4:
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);
            div = (num1 > num2) ? num1 / num2 : num2 / num1;
            printf("The Difference is : %d", div);
            getch();
            break;

        default:
            end = 1;
            printf("Thank you for joining us\n");
            printf("Press any key to exit!!");
            getch();
            break;
        }
    }

    //main code
    return 0;
}
