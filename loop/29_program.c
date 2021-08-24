/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)

*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int hours,payment,overtime;
const int overtime_rate = 12; 

 //main code  
for(int i = 1;i<10;i++){
    printf("Enter the total hour worked in a week : ");
    scanf("%d",&hours);
    if(hours > 40){
    overtime = hours - 40;
    payment = overtime * overtime_rate;
    printf("Your Payment for Overtime %d and payment is  Rs %d \n",overtime,payment);
    }
} 
 return 0; 
 }