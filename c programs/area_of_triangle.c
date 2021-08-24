
/*
Author : Nishan Ghimire
Roll no : 16
 Question
WAP to take input from user and print the area of triangle
*/

# include<stdio.h>
 int main(){
    //  Declaring variable
  float a,b,c,s,area,p;   

    // Giving instruction to user and taking input from user
  printf("************ Program to Calculate area of Triangle **************\n");
  printf("Enter the length of first side : ");
  scanf("%f",&a);
  printf("Enter the length of second side : ");
  scanf("%f",&b);
  printf("Enter the length of third side : ");
  scanf("%f",&c);
    // running calculation
  p = a + b + c;
  s = p/2;
  area = s*((s-a)*(s-b)*(s-c));
    // presenting output
printf("We got an answer :)\n");
printf("Perimeter is : %f\n",p);
printf("Semi-Perimeter is : %f\n",s);
printf("Area is : %f\n",area);

 return 0; 
 }