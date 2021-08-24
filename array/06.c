/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
1.WAP to read n numbers and count and display those numbers that are divisible by 3 and not by 12. 
*/
# include<stdio.h>
 int main(){
   int n,count=0;

   printf("How many numbers you want to enter : ");
   scanf("%d",&n);
   int num[n];

   for(int i = 0; i < n;i++){
       printf("Number : ");
       scanf("%d",&num[i]);
   }

 printf("The required numbers are : \n");
   for(int j = 0; j < n; j++)
   {
       if(num[j] % 3 == 0 && num[j] % 12 != 0){
           count++;
           printf("%d\t",num[j]);
       }
   }
   printf("\n so there are %d such numbers ",count);
   

 return 0; 
 }