/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a function that receives marks obtaine by a student in 3
subjects and return the averege and percent of these marks 
Call this function from main and print the value in main()
*/
# include<stdio.h>
int calculate(int a,int b,int c,float *average,float *percent);
 int main(){
   int chem,phy,com;
   float average,percent;
   printf("Enter your marks in Chemistry : ");
   scanf("%d",&chem);
   printf("Enter your marks in Physic : ");
   scanf("%d",&phy);
   printf("Enter your marks in Computer : ");
   scanf("%d",&com);
   calculate(chem,phy,com,&average,&percent);
   printf("Percent : %f\tAverage : %f\n",percent,average);
 return 0; 
 }
int calculate(int a,int b,int c,float *average,float *percent){
*average = (a+b+c)/3;
*percent = (a+b+c)*100/300;
}