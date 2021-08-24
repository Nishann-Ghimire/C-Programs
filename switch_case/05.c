/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
1 + 1/1! + 1/2! + 1/3!.... 
*/
# include<stdio.h>
 int main(){
     int n,fac = 1;
     float ans = 1;

   printf("Enter number ");
   scanf("%d",&n);
   for (int i = 1; i <= n; i++)
   {
        for (int j = 1; j <= i; j++)
        {
            fac *= j;
        }
        ans += 1/(fac*1.0);
   }
  printf("sum is : %f",ans); 
 return 0; 
 }