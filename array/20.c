/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to find sum of major diagonal using function
*/
#include<stdio.h>
int sum(int r, int c, int arr[r][c]){
int add = 0;
    for (int i = 0; i < r; i++)
     {
         for (int j = 0; j < c; j++)
         {
             if(i == j)
             add+=arr[i][j];
         }
         
     }
     return add;
}

 int main(){
   int matrix[3][3];
   int r,c;
   printf("Enter no of rows : ");
   scanf("%d",&r);
   printf("Enter no of column : ");
   scanf("%d",&c);
   printf("Enter a array : ");
       for (int i = 0; i < r; i++)
     {
         for (int j = 0; j < c; j++)
         {
             scanf("%d",&matrix[i][j]);
         }
         
     }
    printf("The sum of diagonal matrix is : %d",sum(r,c,matrix));
     return 0; 
 }