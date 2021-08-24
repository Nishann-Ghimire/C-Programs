/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to add 2 X 2 matrix
*/
# include<stdio.h>
 int main(){
    int row,col;
     printf("Enter the row size of matrix : ");
     scanf("%d",&row);
     printf("Enter the column size of matrix : ");
     scanf("%d",&col);
     int matrix1[row][col];
     int matrix2[row][col];
     int sum[row][col];
printf("Enter the matrix element for 1st matrix : \n");
for (int a = 0; a < row; a++)
{
    for (int b = 0; b < col; b++)
    {
        printf("%d,%d value: ",a,b);
        scanf("%d",&matrix1[a][b]);
    }
    
}
printf("Enter the matrix element for 2st matrix : \n");
for (int c = 0; c < row; c++)
{
    for (int d = 0; d < col; d++)
    {
        printf("%d,%d value: ",c,d);
        scanf("%d",&matrix2[c][d]);
    }  
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }   
}
for (int k = 0; k < row; k++)
{
    for (int l = 0; l < col; l++)
    {
        printf("%d\t",sum[k][l]);
    }
    printf("\n");
}
 return 0; 
 }