# include<stdio.h>
 int main(){
// var for user input
int maths, science, computer;
// var for calculation
float result;
printf("Enter marks on Maths: ");
scanf("%d",&maths);
printf("Enter marks on science: ");
scanf("%d",&science);
printf("Enter marks on computer: ");
scanf("%d",&computer);
result = (maths + science + computer)/3;

// checking condition for pass or fail
if(result >= 40 && computer >= 33 && science >= 33 && maths >= 33)
{
    printf("Congratulation :) you are pass and your percentage is %f",result);
}else
{
    printf("We are so sorry to say that you could not obtain your pass marks\nPlease try next time :(");
}
 return 0; 
 }