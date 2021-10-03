/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input an array and find the sum of individual row
*/
# include<stdio.h>

 void addRow(int a,int b,int s[a][b]){
int sum = 0;
     for (int i = 0; i < a; i++)
     {
         for (int j = 0; j < b; j++)
         {
             sum+=s[i][j];
         }
         
     printf("The sum of row %d is : %d\n",i+1,sum);
     }
     
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
     addRow(r,c,matrix);
 return 0; 
 }
