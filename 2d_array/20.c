/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
4.  WAP to input mxn order matrix and sort the array using bubble sort the array in ascending order.
*/
# include<stdio.h>
 int main(){
int array[20][20];
int num = 0;
 int l,m;
int n = 5,temp;
int i,j;

printf("Enter the no of row : ");
scanf("%d",&l);
printf("Enter the no of column : ");
scanf("%d",&m);


printf("Enter elements  for array A : \n");
   for (i = 0; i < l; i++)
   {
       for (j = 0; j < m; j++)
       {
           scanf("%d",&array[i][j]);
       }
       
   }



printf("Array before sorting :\n ");

for ( i = 0; i < l; i++)
for ( j = 0; j < m; j++)
     printf("\t %d",array[i][j]);
 

for (int d = 0; d < l; d++)
{
    
for( i = 0; i < m-1; i++)
{
  
    for ( j = 0; j < m-1-i; j++)
    {
        if(array[d][j] > array[d][j+1]){
        temp = array[d][j];
        array[d][j] = array[d][j+1];
        array[d][1+j] = temp;
       
        }
    }    
 
}
}
printf("\nArray after sorting :\n ");
 for ( i = 0; i < l; i++){
for ( j = 0; j < m; j++)
     printf("\t %d",array[i][j]);
     printf("\n");
 }
 
 
 return 0; 
 }