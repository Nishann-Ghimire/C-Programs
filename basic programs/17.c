/* Author: Nishan Ghimire 
Roll no : 210316
Question
5.	Write a program to read the radius of a circle and compute its Area and Circumference.
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
    float radius, area, peri;
    const float pi = 3.14;
   printf("Enter the radius of circle : ");
   scanf("%f",&radius);

 //main code 
 area = pow(radius,2)*pi;
 peri = 2*pi*radius;

 printf("The area of circle is : %f, and perimeter is : %f", area,peri);
 return 0; 
 }