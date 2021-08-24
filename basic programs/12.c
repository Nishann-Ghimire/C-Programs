/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/05/28
Question
4. Write a program to read the radius of a sphere and compute its Surface Area and Volume.
(Hint SA=4∏r2 , V=(4/3)∏r3 ) 
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
   int radius;
   float sa, v;
   const float pi = 3.14;
   printf("Enter the radius : ");
   scanf("%d",&radius);

// calculations 
 sa = 4*pi*pow(radius,2);
 v = (4/3)*pi*pow(radius,3);
 
//  Displaying outputs
 printf("The Surface area is : %f\n Volume is %f ",sa,v);
 return 0; 
 }