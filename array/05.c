/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to Sort the program by selection sort algorithm
*/
# include<stdio.h>
 int main(){
   int arr[5] = {23,78,32,93,21};
   int temp,minValindex,n = 5;

   for (int i = 0; i < n; i++)
   {
       minValindex = i; //for tracking min value position
       for (int j = i+1; j < n; j++)
       {
           if(arr[j] < arr[minValindex]){
             minValindex = j;
           }
           
       }
    //    Swaping 
    temp = arr[i];
    arr[i] = arr[minValindex];
    arr[minValindex] = temp;
   }
   
       for (int k = 0; k < 5; k++)
   {
       printf("\t %d ",arr[k]);
   }
   
   
 return 0; 
 }