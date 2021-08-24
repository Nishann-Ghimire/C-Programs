/* Author: Nishan Ghimire 
Roll no : 210316
Question
6.	Write a program to read the radius of a sphere and compute its Surface Area and Volume. 
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
    float radius, area, vol;
    const float pi = 3.14;
   printf("Enter the radius of Sphere : ");
   scanf("%f",&radius);

 //main code 
 area = pow(radius,2)*pi*4;
 vol = (4/3)*pi*pow(radius,3);

 printf("The area of Sphere is : %f, and volume is : %f", area,vol);
 return 0; 
 }