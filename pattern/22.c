/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print the pattern:
   1
  121
 12321
1234321
*/
# include<stdio.h>
 int main(){
   for (int i = 1; i < 5; i++)
   {
       int k = 1;
       for (int j = 1; j < 8; j++)
       {
           if(j>=5-i && j<=3+i){
               printf("%d",k);
               j<4?k++:k--;
           }
           else
            printf(" ");
           
       }
       printf("\n");
   }
   
 return 0; 
 }