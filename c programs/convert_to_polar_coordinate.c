/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
#include <stdio.h>
#include <math.h>
int mysq(int n);
int main()
{
    //Declaring variable and taking inputs
    float x, y, r, a;
    printf("Enter the Cartesian co-ordinates for X : ");
    scanf("%f", &x);
    printf("Enter the Cartesian co-ordinates for Y : ");
    scanf("%f", &y);

    //Calculations
    r = sqrt(mysq(x) + mysq(y));
    a = atan(y / x);

    //Displaying results
    printf("Hence the polar coordinate are (%f,%f)",r,a);
    return 0;
}
// Declaring function for squaring value
int mysq(int n)
{
    int m;
    m = n*n;
    return (m);
}