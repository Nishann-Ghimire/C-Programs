/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
A 5-digit positive integer is entered through the keyboard, write a 
recursive and non-recursive function to calculate sum of digits of the 
5- digits.
*/
# include<stdio.h>
int recur(int num);
int nonrecur(int n);
 int main(){
     int number;
   printf("Enter a number : ");
   scanf("%d",&number);
printf("The sum is : %d",nonrecur(number)); //non recusive method
printf("The sum is : %d",recur(number)); //recursive method
 return 0; 
 }

 //non recusive function
int nonrecur(int n){
int sum = 0,rem;
while (n)
{
    rem = n % 10;
    sum += rem;
    n /= 10;
}
return sum;
}

//recursive function
int add = 0;
int recur(int num){
   
    int rem;
    if(num == 0){
        return add;
    }else{
        rem = num%10;
        add += rem;
        recur(num/10);
        return add;
    }
}