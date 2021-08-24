/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/05/28
Question
Write a program to read the weight in gram and convert it to Kilogram and gram.
*/
#include <stdio.h>
int main()
{
    //Declaring variable and taking inputs
    int kg, gram, g;
    printf("Enter the weight in gram : ");
    scanf("%d", &gram);
    g = gram % 1000; 
    kg = gram / 1000;
    printf("The weight is %d kg and %d gram", kg, g);
    return 0;
}