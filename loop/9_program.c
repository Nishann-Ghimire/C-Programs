/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question

*/

#include<stdio.h>
int main ()
{
int i,n,a=1,b=1,c;
c = a + b;
printf("Enter value of n: ");
scanf("%d",&n);
printf("%d\t%d\t",a,b);

for(i=1;i<=n;i++)
{
printf("%d\t",c);
a = b;
b = c;
c = a +b;
}
return 0;
}
   
  