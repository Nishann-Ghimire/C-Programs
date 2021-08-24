/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int num;
  int factorial = 1;
  printf("Enter a number : ");
  scanf("%d",&num); 

 //main code
for(int i = 1; i <= num; i++){
factorial *= i;
}
printf("%d",factorial);
 return 0; 
 }