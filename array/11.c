/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to take five number from users and print sum
*/
# include<stdio.h>
 int main(){
  int nums[5],sum = 0;
  for (int i = 0; i < 5; i++)
  {
      printf("Enter a number : \n");
      scanf("%d",&nums[i]);
        sum+=nums[i];
  }
   printf("The sum is : %d",sum);
 return 0; 
 }