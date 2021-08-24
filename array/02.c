/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Input two array store sum in third array
*/
# include<stdio.h>
 int main(){
   int arr1[5] = {1,2,3,4,5};
   int arr2[5] = {1,2,3,4,5};
   int arr3[5];
       printf("\nNumbers in array 1 : ");
   for (int i = 0; i < 5; i++)
   {
       printf("\t %d",arr1[i]);
   }
       printf("\nNumbers in array 2 : ");
   for (int j = 0; j < 5; j++)
   {
       printf("\t %d",arr2[j]);
   }
   printf("\nSUM is : ");
   for (int k = 0; k < 5; k++)
   {
       arr3[k] =arr1[k] + arr2[k];
       printf("%d",arr3[k]);
    
   }
   
 return 0; 
 }