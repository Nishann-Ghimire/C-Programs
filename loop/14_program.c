/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Sum of even number up to n number
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int sum = 0,i = 1,n;
   printf("Enter a number : ");
   scanf("%d",&n);
 //main code  
 while (i <= n)
 {
    sum += i;
     i += 2;
}
printf("The sum is : %d",sum);
 return 0; 
 }