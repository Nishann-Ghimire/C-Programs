/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
2. WAP to input mxn order matrix and find sum of individual row and column.
*/
# include<stdio.h>
 int main(){
    int a[3][3],sr = 0,sc = 0;
    int m,n;
    int i,j;
printf("Enter the no of row : ");
scanf("%d",&m);
printf("Enter the no of column : ");
scanf("%d",&n);


printf("Enter elements  for array A : \n");
   for (i = 0; i < m; i++)
   {
       for (j = 0; j < n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }



   for (i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
     sr += a[i][j];
     sc += a[j][i];
        
    }  
printf("The sum of %d row is : %d\n",i+1,sr);
printf("The sum of %d col is : %d\n",j+1,sc);
   sc = 0;
   sr = 0;
}



 return 0; 
 }