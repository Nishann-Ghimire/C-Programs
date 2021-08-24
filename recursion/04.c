/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question 
Write a recursive function to obtain the first 25 number
of a fibonacci sequence. In a Fibonacci sequence the sum of 
two succesive terms gives the third term. Following are the 
first few terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89  
*/
#include <stdio.h>
int sum = 0, a = 0, b = 1;
void fibonacci(int n);
int main()
{
    int terms;
    printf("Enter the terms : ");
    scanf("%d", &terms);
    fibonacci(terms);
    return 0;
}
void fibonacci(int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d\n", a);
        fibonacci(n - 1);
    }
}