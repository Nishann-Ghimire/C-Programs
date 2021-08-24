/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/06/11
Question
WAP to find roots of a quardatic equation
*/
#include<stdio.h>
#include<math.h>
int main ()
{
float a,b,c,d,x,y;
printf("Enter the coefficient of the quadratic equation : ");
scanf("%f%f%f",&a,&b,&c);
d = pow(b,2)-4*a*c;
if(d<0){
    printf("Roots are imaginary");
}
else if(d == 0){
    printf("The roots are equal\n");
    x=y= (-b)/(2*a);
    printf("The roots are %f and %f ",x,y);
}
else if(d > 0){
    printf("The roots are real and distinct\n");
    x=(-b+sqrt(d))/2*a;
    y=(-b-sqrt(d))/2*a;
    printf("The roots are %f and %f",x,y);

} 
else{
    printf("Please enter the valid input !");
}
return 0;
}