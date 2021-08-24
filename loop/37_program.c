/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to print all prime numbers from 1 to 300
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int num,rem,count,j,i;
 //main code  
 for (int i = 1; i < 300; i++)
 {
     count = 0;
                for (int j = 1; j <= i; j++)
                {
                    if(i%j == 0){
                        count++;
                    }
                    if(count > 2){
                        break;
                    }
                }
     if(count == 2){
         printf("%d\n",i);
     }
 }
 
 return 0; 
 }