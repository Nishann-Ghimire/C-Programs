/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a general purpose function to convert any given year into its Roman 
eqivalent. Use these Roman eqivalents for Decimal number:
1 -I , 5 --> V ,10 --> X , 50 --> L , 100 --> C , 500 --> D , 1000 --> M
Example 1988 --> mdcccclxxxviii
1525 --> mdxxv
*/
# include<stdio.h>
 void roman(int n);
 int main(){
   int num;
printf("Enter a number : ");
scanf("%d",&num);
roman(num);

 return 0; 
 }
 void roman(int n){
     int rem,digits;
 
     while (n != 0)
     {
   if(n >= 1000){
     printf("M");
     n -= 1000;
   } else if(n >= 900){
     printf("CM");
     n -=900;
   } else if(n >= 500){
     printf("D");
     n -=500;
   } else if(n >= 400){
     printf("CD");
     n -= 400;
   }else if(n >= 100){
     printf("C");
     n -= 100;
   }else if(n >= 90){
    printf("XC");
     n -= 90;
   }else if(n >= 50){
     printf("L");
     n -= 50;
   }else if(n >= 40){
     printf("XL");
     n -= 40;
   }else if(n >= 10){
     printf("X");
     n -=10;
   }else if (n >= 9){
     printf("IX");
     n -= 9;
   }else if(n >= 5){
     printf("V");
     n -= 5;
   }else if(n >= 4){
     printf("IV");
     n -= 4;
   } else if(n >= 1){
     printf("I");
     n -= 1;
   } 
     
      }
 }
 