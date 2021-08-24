/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int c , d, e;
  printf("Enter any number in c: ");
  scanf("%d",&c); 
  printf("Enter any number in d: ");
  scanf("%d",&d); 
  e = c;
  c = d;
  d = e;
  printf("The value of c is now : %d\n",c);
  printf("The value of d is now : %d",d);
 //main code  
 return 0; 
 }