/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
#include <stdio.h>
#include <math.h>
int main()
{
    //Declaring variable and taking inputs
    float t, v, wcf;
    printf("Please Enter the Temperature : ");
    scanf("%f", &t);
    printf("Please Enter the Velocity of wind : ");
    scanf("%f", &v);

    //  Calculation
    wcf = 35.74 + (0.6215 * t) + ((0.4275 * t) - 35.75) * pow(v, 0.16);
    // Displaying Value to users
    printf("The Wind Chill Factor is : %f", wcf);
    return 0;
}