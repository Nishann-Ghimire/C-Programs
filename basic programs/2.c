/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/21
Question
WAP to print ASCII value of given character
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
char a;
printf("Enter the character whose ASCII value you want: ");
scanf("%c",&a);
// Displaying output
printf(" The ASCII value of %c is : %d",a,a);
return 0; 
}