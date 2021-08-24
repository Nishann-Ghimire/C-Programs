/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Population of town today is 100000.The population has increased steadily at the 
rate of 10% per year for last 10 years . WAP to determine the population at the 
end of each year in last decade.

*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int present = 100000,last = 100000;
    
//   last year  = (100* present year)/110;

 //main code  
 for (int i = 10; i >= 1; i--)
 {
     printf("%d --> %d\n",i,last);
     last = (100*present)/110;
     present = last;
 }
 
 return 0; 
 }