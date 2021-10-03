
/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
1. WAP to input mxn order matrix and calculate sum of all elements in it.
*/
# include<stdio.h>
 int main(){
    int a[3][3],s = 0;
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
printf("Enter elements  for array A : \n");
   for (i = 0; i < m; i++)
   {
       for (j = 0; j < n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }
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
     s += a[i][j];
        
    }  
   
}

printf("The sum is : %d",s);

 return 0; 
 }