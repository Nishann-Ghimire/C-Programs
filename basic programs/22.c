/* Author: Nishan Ghimire 
Roll no : 210316
Question
10.	Calculate the mass of air in an automobile tire, using the formula
PV=0.37m(T+460)
Where P=Pressure, V= Volume, m=mass, T= Temperature
Read the value of P, V, T from the keyboard.

*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  float p,v,t,m;
  printf("Pressure : ");
  scanf("%f",&p);
  printf("Volume : ");
  scanf("%f",&v);
  printf("Temperature : ");
  scanf("%f",&t);


 //main code  
 m = (p*v)/(0.37*(t+460));
 printf("The mass of air in automobile tire is : %f",m);
 return 0; 
 }