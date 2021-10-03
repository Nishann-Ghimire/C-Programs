/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to check prime number using function
*/
# include<stdio.h>
void CheckPrime(int);
 int main(){
   int num;
   printf("Enter a number : ");
   scanf("%d",&num);
   CheckPrime(num);
 return 0; 
 }
 void CheckPrime(int n){
     int count = 0;
    for (int i = 1; i < n; i++)
    {
        if(n%i == 0)
        count++;
    }
    if(count < 2)
    printf("The number is prime number");
    else
    printf("The number is not prime number");
 }
