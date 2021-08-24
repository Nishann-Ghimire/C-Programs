/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a function power(a,b) to calculate the value of a raised to b
*/
#include <stdio.h>
int power(int a, int b);

int main()
{
    int num1,num2;
    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter power : ");
    scanf("%d", &num2);

    printf("The required output is : %d", power(num1, num2));
    return 0;
}

// power function
int power(int a, int b)
{
    int fvalue = 1;
    for (int i = 0; i < b; i++)
    {
        fvalue *= a;
    }
    return fvalue;
}