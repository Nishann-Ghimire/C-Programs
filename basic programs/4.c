/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/21
Question
WAP to print character for given ASCII value
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int a;
printf("Enter the ASCII code whose character you want: ");
scanf("%d",&a);
// Displaying output
printf(" The Character of %d is : %c",a,a);
return 0; 
}