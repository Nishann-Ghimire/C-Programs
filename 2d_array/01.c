
# include<stdio.h>
 int main(){
   int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int i,j;
   int b[3][3];

   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   printf("Enter elements 9 for array\n");
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           scanf("%d",&b[i][j]);
       }
       
   }
   printf("The entered array is :\n");
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
            printf("%d\t",a[i][j]);
                 }
       printf("\n");
   }
   
 return 0; 
 }