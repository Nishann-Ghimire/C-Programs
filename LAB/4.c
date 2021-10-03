/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to calculate area of rectangle using macro
*/
# include<stdio.h>
# define AREA(l,b) (l*b) 
 int main(){
     int length,breadth,area;
   printf("Enter the length : ");
   scanf("%d",&length);
   printf("Enter the breath : ");
   scanf("%d",&breadth);
   area = AREA(length,breadth);
   printf("AREA is : %d",area);
 return 0; 
 }