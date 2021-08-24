/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)

*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int num;
char in = 'y';


 //main code  
 while (in == 'y' || in == 'Y')
 {
    printf("Enter a number : ");
    scanf("%d",&num);
  if(num < 0){
      printf("The number is negative");
  }else if(num == 0){
      printf("The number is Zero");
  }else if(num > 0){
      printf("The number is positive");
  }else{
      printf("Enter the valid input");
  }
 printf("\nDo Want to try it once more type y for yes and n for no");
 fflush(stdin);
 scanf("%c",&in);
 }
 
 return 0; 
 }
