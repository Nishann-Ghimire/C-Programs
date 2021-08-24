/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
#include <stdio.h>
#include <math.h>
int main()
{
    //Declaring variable and taking inputs
    float angle;
    const float pi = 22/7;
    printf("Enter the angle : ");
    scanf("%f",&angle);
     angle = angle * (pi/180);
    //  Displaying output to users
    printf("%f\n",angle);
    printf("The ratio of given angle in sin is %f\n", sin(angle));
    printf("The ratio of given angle in cos is %f\n", cos(angle));
    printf("The ratio of given angle in tan is %f\n", tan(angle));
    printf("The ratio of given angle in cot is %f\n", tanf(angle));
    printf("The ratio of given angle in cosec is %f\n", sinf(angle));
    printf("The ratio of given angle in sec is %f\n", cosf(angle));
    //main code
    return 0;
}