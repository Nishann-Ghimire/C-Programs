/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to find max of three numbers

*/
#include <stdio.h>
float compare(float, float, float);
int main()
{
    float w, x, y, z;
    printf("Enter three number : ");
    scanf("%f%f%f", &w, &x, &y);
    z = compare(w,x, y);
    printf("The maximum number is : %f", z);
    return 0;
}
float compare(float a, float b, float c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    return c;
}