/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to reverse a number using function
*/
#include <stdio.h>
int reverseNum(int);
int main()
{
    int num, reverse;
    printf("Enter a number : ");
    scanf("%d", &num);
    reverse = reverseNum(num);
    printf("The reverse of %d is %d", num, reverse);

    return 0;
}
int reverseNum(int n)
{
    int rev = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}