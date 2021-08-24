/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Given three variable x,y,z write a function to circularly shift their values to right.In 
other words if x = 5,y = 5,z = 10, after circular shift y = 5, z = 8, x = 10. Call the 
function with variable a,b,c to circularly shift values. 
*/
# include<stdio.h>
 int circulate(int *a,int *b,int *c);
 int main(){
   int a,b,c;
   printf("Enter 3 numbers : ");
   scanf("%d%d%d",&a,&b,&c);
   printf("\na : %d\t b: %d\t c: %d\t",a,b,c);
   circulate(&a,&b,&c);
   printf("\na : %d\t b: %d\t c: %d\t",a,b,c);
 return 0; 
 }
 int circulate(int *a,int *b,int *c){
     int d; 
     //suppose a = 5  b = 8 c = 10 ||a =10 b = 5 c = 8 
      d = *b; // d = 8
     *b = *a; //b = 5
     *a = *c; // a = 10 
     *c = d; // c = 8
        
 }