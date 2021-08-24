/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a recursive function to obtain the sum of first 25 natural 
number.
*/
# include<stdio.h>
int recursum(int sum);
int i = 0;
 int main(){
   int add = 0;
   recursum(add);
 return 0; 
 }
int recursum(int sum){
    
    
    if(i >= 25){
        printf("SUM is : %d",sum);
        return 0;
    }else{
        i++;
        sum += i;
        recursum(sum);
    }
}