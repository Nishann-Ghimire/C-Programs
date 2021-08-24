/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to add first seven terms of following series using for loop
1/1! + 2/2! + 3/3! + ....

*/
# include<stdio.h>
 int main(){
//Declaring variable 
   float num,sum = 0,factorial;
 //main code
for (int i = 1; i <= 7; i++)
{
    factorial = 1;
    for (int j = 1; j <= i; j++)
    {
        factorial *= j;
    
    }
    sum += i/factorial;

}
printf("%f",sum);
 return 0; 
 }