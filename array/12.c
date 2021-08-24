/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program in C to read n number of values in an array 
and display it in reverse order
*/
# include<stdio.h>
 int main(){
   int n;
   printf("How much number you need : ");
   scanf("%d",&n);
   int nums[n];
   for (int i = 0; i < n; i++)
   {
       printf("\nEnter a number: ");
       scanf("%d",&nums[i]);
   }
   for (int j = 0; j < n; j++)
   {
    //    printf("\n\n\n%d\n\n\n",n);
       printf("\n %d",nums[n-j-1]); 
   }
   
   
 return 0; 
 }