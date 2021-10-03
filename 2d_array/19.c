/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
3. WAP to input mxn order matrix and find sum of major and minor diagonal in the matrix
*/
# include<stdio.h>
 int main(){
    int a[3][3],sMinor = 0,sMajor = 0;
    int m,n;
    int i,j;
printf("Enter the no of row : ");
scanf("%d",&m);
printf("Enter the no of column : ");
scanf("%d",&n);
if(m!=n)
return 0;

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
        if(i == j)
     sMajor += a[i][j];
        if(i+j == m-1)
     sMinor += a[i][j];

    }  

}
printf("The sum of major diagonal is : %d\n",sMajor);
printf("The sum of minor diagonal is : %d\n",sMinor);
   return 0;
}

