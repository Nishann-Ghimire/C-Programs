/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date : 2021/06/16

Question
12. Company insures drivers in following cases
1 If driver is married
2 If driver is unmarried male and above 30 yrs of age
3 If driver is unmarried female and above 25 yrs of age
Use operators &&, || (else if ladder)
*/
#include<stdio.h>
int main(){
char ms,g;
int age;
printf("Enter your marital status(M for married and U for unmarried: \n");
scanf("%c",&ms);
printf("Enter your age: \n");
scanf("%d",&age);
fflush(stdin);
printf("Enter your gender(m for male and f for female: \n");
scanf("%c",&g);
if(ms=='M')
{
printf("Your are insured");
}
else if(ms=='U' && g=='m' && age>30)
{
    if(g=='f' && age>25){
    printf("You are insured");
    }else if(g=='m' && age>30){
    printf("You are insured");  
    }
}
else
{
printf("You are not insured");
}
return 0;

}