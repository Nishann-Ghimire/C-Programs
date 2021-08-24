/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
A positive integer is entered through the keyboard, write a function
to find the binary eqivalent of this number:
1) without using recursion
2) using recursion
*/
# include<stdio.h>
# include<math.h>
   void recur(int n);
   void nonrecur(int num);
 int main(){
     int number;
     printf("Enter a number :");
     scanf("%d",&number);
     nonrecur(number);
     
 return 0;  
 }
//  Recursion function
   void recur(int n){
       if(n < 1){
       return;
       }else{
       int rem = n%2;
       recur(n/2);
       printf("%d",rem);
       }
   }
// Non-Recursion function
void nonrecur(int num){
     int bin = 0, rem = 0, place = 1;  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    } 
    printf("\nBinary equivalent of %d is %d", num,bin);   
    
  
   
}