/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
3.	Write a menu-driven program using Switch case to calculate the following:
1.	sum of digits
2.	count number of digits
3.	palindrome
4.	reverse number

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, count = 0;
    int n,oldNum, rem, sum = 0;
    int rev = 0;
    printf("***************MENU**************\n");
    printf("1.sum of digits\n2.count number of digits\n3.palindrome\n4.reverse number\n5.Exit\n");
 
while(1){
    printf("Enter your choice : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        //    sum of digits
        printf("Enter a number : ");
        scanf("%d", &n);
        while (n)
        {
            rem = n % 10;
            sum += rem;
            n /= 10;
        }
        printf("The sum of digits : %d\n", sum);
        break;

    case 2:
        // count number of digits
        printf("Enter a number : ");
        scanf("%d", &n);
        while (n)
        {
            count++;
            n /= 10;
        }
        printf("The number of digits : %d\n", count);
        break;

    case 3:
 //   palindrome
        printf("Enter a number : ");
        scanf("%d", &n);
        oldNum = n;
        while (n)
        {
            rem = n % 10;
            rev = rev*10 + rem;
            n /= 10;
        }
        if(oldNum == rev)
        printf("The number is palindrome\n");
        else
        printf("The number is not palindrome\n");
        break;

    case 4:
        //  reverse number
         printf("Enter a number : ");
        scanf("%d", &n);
        rev = 0;
        while (n)
        {
            rem = n % 10;
            rev = rev*10 + rem;
            n /= 10;
        }
        printf("The reverse number is %d\n",rev);
        break;

    case 5:
            exit(0);
        break;

    default:
    printf("Enter the correct option\n");
        break;
    }
    }
    return 0;
}