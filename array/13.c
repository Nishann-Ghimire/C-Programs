/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program in C to copy the elements of one array into another array.
*/
# include<stdio.h>
 int main(){
   int nums1[5];
   int nums2[5];
   for (int i = 0; i < 5; i++)
   {
       printf("Enter a number : ");
       scanf("%d",&nums1[i]);
   }
   
   for (int j = 0; j < 5; j++)
   {
       nums2[j] = nums1[j];
   }
   for (int k = 0; k < 5; k++)
   {
       printf("%d\n",nums2[k]);
   }
   
   
 return 0; 
 }