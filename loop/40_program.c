/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to print the multiplication table of the number entered by the user. The table should be displayed in
following form: 
12 * 1 = 12
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int num;
   printf("Enter a number which table u want to print : ");
   scanf("%d",&num);
 //main code  
 for (int i = 1; i <= 10; i++)
 {
     printf("%d * %d = %d\n",num,i,num*i);
 }
 
 return 0; 
 }