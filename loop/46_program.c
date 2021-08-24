/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! ... 
*/
# include<stdio.h>
 int main(){
   int n,i,j,sign=-1;
   float sum = 1,x,p;
   printf("Enter terms");
   scanf("%d",&n);
   printf("Enter angle in degree");
   scanf("%f",&x);
   x = (3.14*x)/180;//to convert angle in radian
   for ( i = 2; i <= n; i+=2)
   {
       int fact = 1; 
       p = 1;
       for ( j = 1; j <= i; j++)
       {
           p*=x; //numerator
           fact*=j; //denominator

       }
       sum = sum+sign*p/(float)fact;
       sign= sign*-1; //for changing sign for next terms
       
   }
   printf("Cosine of given angle id %f",sum);
 return 0; 
 }