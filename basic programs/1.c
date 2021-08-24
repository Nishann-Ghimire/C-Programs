/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/20
Question
WAP to calculate the result of cb^3/d^2(Read c,d,b from user)
*/

# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
float result,b,c,d;
   printf("Enter the value of b: ");
    scanf("%f",&b);
   printf("Enter the value of b: ");
    scanf("%f",&c);
   printf("Enter the value of b: ");
    scanf("%f",&d);

// Calculation  
result = c*(pow(b,3))/(pow(d,2));


// Displaying results
printf("The result is : %f",result);
 return 0; 
 }