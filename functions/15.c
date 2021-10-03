/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
void fibSeries(int);
# include<stdio.h>
 int main(){
     int num;
   printf("Enter a number ");
   scanf("%d",&num);
   fibSeries(num);
 return 0; 
 }
 void fibSeries(int n){
     int a = 0,b = 1,c = 0,i;
     for ( i = 0; i < n; i++)
     {
         printf("%d\t",a);
         c = a+b;
         a = b;
         b = c;
     }
     
     
 }