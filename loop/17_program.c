/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to print whether a number is armstrong or not
*/
#include <stdio.h>
#include <math.h>
int main()
{
    //Declaring variable and taking inputs
    int sum = 0, num, n, rem;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    //main code
    while (n > 0)
    {
        rem = n % 10;
        sum += pow(rem, 3);
        n /= 10;
    }
    if (num == sum)
    {
        printf("The number is armstrong number");
    }
    else
    {
        printf("The number is not armstrong");
    }
    return 0;
}














