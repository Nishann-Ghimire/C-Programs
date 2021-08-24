/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
If the length of the sides of a triangle are denoted by a,b,c then area of triangle is given by 
area = √s(s-a)(s-b)(s-c)
where  s = (a+b+c)/2
Write a function to calculate area of triangle 
*/
# include<stdio.h>
# include<math.h>
void tarea(int x,int y,int z, float *area);
 int main(){
   int a,b,c;
   float area;
   printf("Enter length of 1st side : ");
   scanf("%d",&a);
   printf("Enter length of 2st side : ");
   scanf("%d",&b);
   printf("Enter length of 3st side : ");
   scanf("%d",&c);
    tarea(a,b,c,&area);
    printf("%f sq meter is the area of triangle",area);
 return 0; 
 }
void tarea(int x,int y,int z, float *area){
    float s;
    s = (x+y+z)/2.0;
    *area  = sqrt(s*(s-x)*(s-y)*(s-z));
    

}
 