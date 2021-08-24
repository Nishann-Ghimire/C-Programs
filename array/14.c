/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program in C to count a total number of duplicate elements in an array.
*/
# include<stdio.h>
 int main(){
    int n = 10,count = 0,num;
   int nums[n];
   for (int k = 0; k < n; k++)
   {
       printf("Enter a number : "); 
       scanf("%d",&nums[k]);
   }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j] && i != j){
                
                count++;

            }
        }
        
    }
    printf(" Dublicate Numbers : %d",count);
  return 0; 
 }