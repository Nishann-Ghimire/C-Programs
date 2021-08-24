/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write program to print prime numbers 
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int num,sum = 0;
    printf("Enter a number : ");
    scanf("%d",&num);

 //main code  
for(int i = 1; i <= num; i++){
if(num%i == 0){
    sum += 1;
}
}
if(sum > 2){
    printf("The number is not prime number");
}else
{
    printf("The number is prime number");    
}

 return 0; 
 }