/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
1 + x + x^2/2! +x^3/3!....
*/
# include<stdio.h>
# include<math.h>
 int main(){
   int fac = 1,num,terms;
   float sum = 1;
   printf("Enter terms : ");
   scanf("%d",&terms);
   printf("Enter number : ");
   scanf("%d",&num);
   for (int i = 1; i < terms; i++)
   {
     for (int j = 1; j <= i; j++)
     {
         fac *= j;
     }
     sum += pow(num,i)/(fac*1.0);
   }
   printf("Your sum is : %f",sum);
 return 0; 
 }