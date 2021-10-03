/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to caculate area of circle for two numbers
*/
# include<stdio.h>
int area(int);
 int main(){
   int r1,r2;
   printf("Enter radius for 1st circle : ");
   scanf("%d",&r1);
   area(r1);
   printf("Enter radius for 2st circle : ");
   scanf("%d",&r2);
   area(r2);

 return 0; 
 }
 int area(int r){
     float Area;
     Area = 3.14*r*r;
     printf("The area is : %f\n",Area); 
 }