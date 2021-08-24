# include<stdio.h>
 int main(){
//   variables for user input
float time, rate, principle;
// variable for calculation
float si;
printf("Enter the time: ");
scanf("%f",&time);
printf("Enter the rate: ");
scanf("%f",&rate);
printf("Enter the principle: ");
scanf("%f",&principle);
si = (time * principle * rate)/1000;
printf("You Simple Interest is Rs %f", si);
 return 0; 
 }