/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to copy the content of ane array to another into reverse order
*/
# include<stdio.h>
 int main(){
  int arr[5];
  int rev_arr[5];
  int n = 5;
  for (int i = 0; i < n; i++)
  {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
  }
   
  for (int j = 0; j < n; j++)
  {
      rev_arr[j] = arr[n-j-1]; 
  }

printf("The reverse numbers are : ");
for (int k = 0; k < n; k++)
{
    printf("\n %d",rev_arr[k]);
}
   
 return 0; 
 }