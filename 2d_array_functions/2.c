/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input mxn order matrix and calculate sum of all elements in it and find the sum of major and minor elements.
*/
# include<stdio.h>
void sumDiagonal(int r,int c,int arr[r][c]){
    int i,j,sMajor = 0,sMinor = 0;
   for (i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        if(i == j)
     sMajor += arr[i][j];
        if(i+j == r-1)
     sMinor += arr[i][j];

    }  

}
printf("The sum of major diagonal is : %d\n",sMajor);
printf("The sum of minor diagonal is : %d\n",sMinor);
   
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

 sumDiagonal(m,n,a);
 return 0; 
 }