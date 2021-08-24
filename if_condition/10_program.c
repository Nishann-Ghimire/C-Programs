/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/06/10
Question
Calculate the amount of electricity bill consumed. Input the unit
consumed And,
 for first 100 units= Rs.8/unit
 for next 200 units=Rs12/unit
 Beyond 300 units=Rs15/unit
All users are charged with meter charge with Rs.50.Now calculate total
amount to be paid.
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int units,total;
printf("Enter the Unit Consumed: ");
scanf("%d",&units); 
 //main code  
if(units <= 100){
    total = units * 8 + 50;
    printf("Your total Electricity bill is : %d",total);
}else if(units > 100 && units <= 300){
    total = (units - 100)*12 +(100*8) + 50;
    printf("Your total Electricity bill is : %d",total);
}else if (units > 300){
    total = (units - 300)*15 + (200 * 12)+(8 * 100) + 50;
    printf("Your total Electricity bill is :  Rs %d",total);
}else{
    printf("Please Enter the valid unit");
}
 
 return 0; 
 }