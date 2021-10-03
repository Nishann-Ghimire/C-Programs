/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to calculate Simple interest, and print result inside main
*/
# include<stdio.h>
   float simpleInterest();
 int main(){
printf("The simple interest is : %f",simpleInterest());

 return 0; 
 }
 float simpleInterest(){
     int p,r,t;
     float si;
     printf("Enter principle amount : ");
     scanf("%d",&p);
     printf("Enter Time : ");
     scanf("%d",&r);
     printf("Enter Rate of Interest : ");
     scanf("%d",&t);
    si = (p*t*r)/100;
   
    return si;


 }
