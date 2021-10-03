/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input mxn order matrix and calculate sum of all elements in it.
*/
# include<stdio.h>
int sum(int r,int c,int arr[r][c]){
    int i,j;
    int add = 0;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            add+=arr[i][j];
        }    
    }
    return add;
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

sum_val = sum(m,n,a);
printf("The sum is : %d",sum_val);
 return 0; 
 }