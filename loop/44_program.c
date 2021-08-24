/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to print 24 hours of day with sutable suffixes like AM, PM, Noon, Midnight. 
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   for (int i = 0; i < 24; i++)
   {
       if(i < 10){
         printf("0%d AM\n",i);
       }
       if(i > 9 && i < 12){
           printf("%d AM\n",i);
       }else if(i >= 12 && i < 17){

           printf("%d PM\n",i);
       }
       else if(i >= 18 && i <= 20){
           printf("%d PM (NOON)\n",i);
   }    else{
           printf("%d PM (Mid Night)\n",i);

   }
   }
 //main code  
 return 0; 
 }