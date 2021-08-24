
# include<stdio.h>
 int main(){
     int m,n;
     printf("Enter order of matrix : ");
     scanf("%d%d",&m,&n);
     int i,j;
     int a[m][n];

   printf("Enter elements  for array\n");
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }
   printf("The entered array is :\n");
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
            printf("%d\t",a[i][j]);
                 }
       printf("\n");
   }
   printf("The entered array is :\n");
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
            printf("%d\t",a[j][i]);
                 }
       printf("\n");
   }
   
 return 0; 
 }