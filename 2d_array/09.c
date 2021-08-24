#include<stdio.h>
int main(){
    int a[3][3] = {{1,1,1},{1,1,1},{1,1,1}},b[3][3] ={{1,1,1},{1,1,1},{1,1,1}},s[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int m = 3,n = 3;
    int i,j;
/*  
printf("Enter elements  for array A : \n");
   for (i = 0; i < m; i++)
   {
       for (j = 0; j < n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }

printf("Enter elements  for array B : \n");
   for (i = 0; i < m; i++)
   {
       for (j = 0; j < n; j++)
       {
           scanf("%d",&b[i][j]);
       }
       
   }
   */

for (i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        for (int r = 0; r < 3; r++)
        {
            
                s[i][j] += a[i][r]*b[j][r]; 
            
            printf("%d%d*%d%d\t",i,r,j,r);
        }
        printf("+");
    }
    printf("\n");
   
}
   printf("\nAnswer : \n");
 for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
          printf("%d\t",s[i][j]);  
   }
   printf("\n"); 
   }
}