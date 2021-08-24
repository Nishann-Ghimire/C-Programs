/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
#include <stdio.h>
#include <math.h>
int main()
{
    //Declaring variable and taking inputs
    float l1, l2, g1, g2, d;
    printf("Enter the 1st  latitude : ");
    scanf("%f", &l1);
    printf("Enter the 2nd  latitude : ");
    scanf("%f", &l1);
    printf("Enter the 1st  longitude : ");
    scanf("%f", &g1);
    printf("Enter the 2nd  longitude : ");
    scanf("%f", &g2);

    //   calculations
    d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));

    printf("The distance in nautical miles\nfor given longitudes(%f,%f) and latitudes(%f,%f) is : %f", l1, l2, g1, g2, d);
    return 0;
}