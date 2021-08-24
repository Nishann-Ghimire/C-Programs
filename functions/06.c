/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to find prime factorial of a number
*/
#include <stdio.h>
void primefac(int n);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    primefac(num);
    return 0;
}
void primefac(int n)
{
    int rem, count = 0;
    for (int i = 2; i <= n; i++)
    {
        
        if (n % i == 0)
        {
            // printf("%d\n",i);
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 0)
                printf("%d\n", i);
        }
    }
}