/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
3. WAP to read an array element and delete an element from a specified position.
*/
# include<stdio.h>
 int main(){
     int arr[100];
     int n,location;
    //  Getting numbers from users 
 printf("How many numbers you want to enter : ");
   scanf("%d",&n);
   for(int i = 0; i < n;i++){
       printf("Number : ");
       scanf("%d",&arr[i]);
   }
   // Getting position for deleting element
   printf("Which position element do you want to delete : ");
   scanf("%d",&location);
  
    n--; 
   for (int j = location-1; j < n; j++)
   {
       arr[j] = arr[j+1];
   }
   printf("The numbers are : ");
   for (int k = 0; k < n; k++)
   {
       printf("%d\t",arr[k]);
   }
 return 0; 
 }