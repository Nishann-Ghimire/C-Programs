/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input mxn order matrix and calculate sum of all elements in it and convert it into upper and lower tringular
matrixes
*/

# include<stdio.h>
void Upper(int r,int c,int arr[r][c]){
     int i,j;
   for(i = 0; i < r; i++){
      printf("\n");
       for(j = 0; j < c; j++){
         if(i > j){
            printf("0");
            printf("\t");
         }
         else{
            printf("%d\t ", arr[i][j]);

         }
      }
   }
} 
void Lower(int r,int c,int arr[r][c]){
   int i,j;
   for(i = 0; i < r; i++){
      printf("\n");
      for(j = 0; j < c; j++){
      if(i >= j){
         printf("%d\t ", arr[i][j]);
      }
      else{
         printf("0");
         printf("\t");
      }
   }
   }
} 

 int main(){
    int m,n;
     printf("Enter order of matrix : ");
     scanf("%d%d",&m,&n);
     int i,j;
     int a[m][n];
     int sum_val;

   printf("Enter elements  for array :\n");
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }
printf("\nUpper triangular matrix :\n");
Upper(m,n,a);
printf("\nLower triangular matrix :\n");
Lower(m,n,a);
 return 0; 
 }




