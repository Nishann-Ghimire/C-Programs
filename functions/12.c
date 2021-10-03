/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to prit sum of n natural numbers
*/
int sum(int);
# include<stdio.h>
 int main(){
     int num;
   printf("Enter a number : ");
   scanf("%d",&num);
   printf("Sum is %d",sum(num));
 return 0; 
 }
int sum(int n){
    int sum;
    sum = n*(n+1)/2;
    return sum;
}