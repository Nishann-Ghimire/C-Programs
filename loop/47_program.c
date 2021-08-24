/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print all armstrong number
*/
# include<stdio.h>
# include<math.h>
 int main(){
   int sum,num,n,terms,rem;
    terms = 999;
    for (int i = 100; i < terms; i++)
    {
        sum = 0;
        n = i;
        while (n > 0)   
        {
            rem = n%10;
            sum+=pow(rem,3);
            n /= 10;
        }
       if(sum == i){
           printf("%d\t",sum);
       } 
    }

 return 0; 
 }