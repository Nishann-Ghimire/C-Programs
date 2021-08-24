/* 
Question
WAP to sum the element row of matrix
*/
 
# include<stdio.h>
 int main(){
     int m,n;
     printf("Enter order of matrix : ");
     scanf("%d%d",&m,&n);
     int i,j;
     int a[m][n];
     int sum = 0;
// Array input
   printf("Enter elements  for array\n");
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }
//    Display Array in matrix
   printf("The entered array is :\n");
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
            printf("%d\t",a[i][j]);
                 }
       printf("\n");
   }
//   Adding diagonal matrix
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
            
                sum += a[i][j];
        
                 }
printf("Sum of %d row is : %d\n",i+1,sum);
sum = 0;     
   }
   
 return 0; 
 }