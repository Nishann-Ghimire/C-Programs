/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAp to input an array of n size input display the element and add elements in it.
*/
# include<stdio.h>
 int main(){
   int i,n,arr[50],sum=0;
   printf("Enter the size of an array: ");
   scanf("%d",&n);
    printf("Enter array : ");
   for(i = 0; i < n;i++){
       scanf("%d",&arr[i]);
   }
   printf("Array : ");
   for(i = 0; i < n;i++){
       printf("%d\t",arr[i]);
        }
    printf("\n");

    for(i = 0; i < n;i++)
       sum+=arr[i];

 printf("The sum is : %d",sum);
 return 0; 
 }