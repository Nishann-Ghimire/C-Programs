/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to print factorial of a number
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int product = 1,num,i = 1;
printf("Enter a number : ");
scanf("%d",&num);

 //main code
while (i <= num)    
{
   product = product * i;
   i++;
}
printf("The factorial  of %d is %d",num,product);
 return 0; 
 }