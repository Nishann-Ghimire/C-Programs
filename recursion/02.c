/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
A positive integer is entered through the keyboard, write a program
to obtain the prime factor of the number. Modify the function suitably
to obtain the prime factors recursively
*/
#include <stdio.h>
int nonrecur(int num);
void recur(int n, int count);
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    // nonrecur(number);
    recur(number,2);
    return 0;
}

//  Non-Recursive method
int nonrecur(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 0)
            {
                printf("%d\t", i);
            }
        }
    }
}
// Recursive method
void recur(int n, int count)
{
    if (n < 1){
        return;
    }
    else if (n % count == 0)
    {
        printf("%d\n", count);
        recur(n / count, count);
    }
    else
    {
        recur(n, count + 1);
    }
}