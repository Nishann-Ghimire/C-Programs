/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
2. WAP to read n elements of an array and find the prime numbers for them. 
*/
# include<stdio.h>
 int main(){
    int n,count;
    // Getting input from user
   printf("How many numbers you want to enter : ");
   scanf("%d",&n);
   int num[n];

   for(int i = 0; i < n;i++){
       printf("Number : ");
       scanf("%d",&num[i]);
   }

//  checking condition for prime number
printf("The prime numbers are : ");
   for (int j = 0; j < n; j++)
   {
       count = 0;
       for(int k = 2; k < num[j]; k++)
       {
           if(num[j]%k == 0){
               count++;
           }
       }
       if(count == 0){
           printf("%d\t",num[j]);
       }
       
   }
   
 return 0; 
 }