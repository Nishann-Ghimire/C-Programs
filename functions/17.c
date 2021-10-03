/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program check whether a number is palindrome or not
*/
#include <stdio.h>
void palindrome(int);
int main()
{
    int num, reverse;
    printf("Enter a number : ");
    scanf("%d", &num);
   palindrome(num);

    return 0;
}
void palindrome(int n)
{
    int ori = n;
    int rev = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if(rev == ori)
    printf("The number is palindrome");
    else
    printf("The number is not palindrome");

    
}