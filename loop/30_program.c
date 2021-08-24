/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int num, pow, product = 1;
  printf("Enter the number : ");
  scanf("%d",&num); 
  printf("Enter the Power : ");
  scanf("%d",&pow); 
 //main code  
for (int i = 0; i < pow; i++)
{
    product *= num;
}
printf("The result is : %d",product);
 return 0; 
 }