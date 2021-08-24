/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
  int num,odd = 0,even = 0;
  printf("Enter a number : ");
  scanf("%d",&num);

 //main code
 for(int i = 1;i<=num;i++){
if(i%2 == 0){
    even+=1; //counts the even numbers
}else{
    odd+=1; //counts the odd numbers
}
 }  
 printf("Even numbers : %d\n",even);
 printf("Odd numbers : %d",odd);
 return 0; 
 }