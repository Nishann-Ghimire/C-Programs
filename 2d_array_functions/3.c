/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input mxn order matrix and calculate sum of all elements in it and find the sum of individual 
row and column.
*/


# include<stdio.h>
void sumRowCol(int r,int c,int arr[r][c]){
  int i,j,sc = 0,sr = 0; 
   for (i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
     sr += arr[i][j];
     sc += arr[j][i];
        
    }  
printf("The sum of %d row is : %d\n",i+1,sr);
printf("The sum of %d col is : %d\n",i+1,sc);
   sc = 0;
   sr = 0;
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

 sumRowCol(m,n,a);
 return 0; 
 }