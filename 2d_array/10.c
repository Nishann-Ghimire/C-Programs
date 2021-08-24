/*WAP to enter 2 matrices and multiply them and display the result*/
#include<stdio.h>
int main()
{
int a[50][50],r1,c1,b[50][50],r2,c2,c[50][50],i,j,k;
top:
printf("Enter order of matrix a\n");
scanf("%d%d",&r1,&c1);
printf("Enter order of matrix b\n");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
printf("Matrix multiplication is not possible. Try Again\n");
goto top;
}
else
{
//input a
printf("\nEnter elements of matrix a\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
//input b
printf("\nEnter elements of matrix b\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
//display a
printf("\nThe matrix a is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
//display b
printf("\nThe matrix b is\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
//matrix multiplication
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)//represents number of terms during multiplication
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
//display c
printf("\nThe resultant matrix c is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
return 0;
}

/* The matrix a is
1 2 3    6 5
4 5 6    4 3
         2 1

The matrix b is
6 5
4 3
2 1

The resultant matrix c is
20 14
56 41 */