/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to find maximum of two numbers
*/
#include <stdio.h>
float compare(float, float);
int main()
{
    float x, y, z;
    printf("Enter two number : ");
    scanf("%f%f", &x, &y);
    z = compare(x, y);
    printf("The maximum number is : %f", z);
    return 0;
}
float compare(float a, float b)
{
    float c;
    c = (a > b)?a:b;
    return c;
}