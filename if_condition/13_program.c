/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/06/14
11. Calculate the amount of electricity bill consumed. Input the unit consumed And,
1 for first 20 units= Rs.80
2 for next 80 units=Rs7.5/unit
3 for next 100 units=Rs8.5/unit
4 Beyond 200 units= Rs9.5/unit
All users are charged with tax rate of 15% in total amount. Now calculate total amount to be paid.
*/
#include<stdio.h>
int main(){
float unit,total,totalwithtax;
printf("Enter total unit consumed: ");
scanf("%f",&unit);
if(unit<=20){
total=80;
}else if(unit<=100){
total=80+(unit-20)*7.5;
}
else if(unit<=200){
total=80+80*7.5+(unit-100)*8.5;
}
else{
total=80+80*7.5+100*8.5+(unit-200)*9.5;
}
totalwithtax=1.15*total;
printf("Total amount with tax is: %f",totalwithtax);
return 0;
}