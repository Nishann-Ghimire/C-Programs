/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question 
Write a program to generate fibonacci series using recursive function

*/
#include <stdio.h>
int sum = 0, a = 0, b = 1;
int fibonacci(int n);
int main()
{
    int terms;
    printf("Enter the terms : ");
    scanf("%d", &terms);
    for (int i = 1; i <= terms; i++)
    {
        printf("%d\t",fibonacci(i));
    }
    
    fibonacci(terms);
    return 0;
}
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
        
    
}