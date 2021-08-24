#include<stdio.h>
int main(){
    int a[3][3],b[3][3],s[3][3];
    int m = 3,n = 3;
    int i,j;

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

for (i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                s[i][j] += a[i][c]*b[c][r]; 
            }
            
        }
        
    }
    
   
}
   printf("Answer : \n");
 for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
          printf("%d\t",s[i][j]);  
   }
   printf("\n"); 
   }
}