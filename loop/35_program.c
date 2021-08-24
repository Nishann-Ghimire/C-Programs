/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Decimal to Octal Conversion
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
  int num,i = 0,rem = 0,oct = 0;
  printf("Enter a number : ");
  scanf("%d",&num);
 //main code
 while(num > 0){
rem = num%8*pow(10,i);
oct += rem;
num /= 8;
i++;
}
printf("The Octal number is : %d",oct);  
 return 0; 
 }