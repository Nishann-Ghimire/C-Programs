/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Find the range of the number 
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int big,small,num,limit,range;

printf("Enter the limit : ");
scanf("%d",&limit);
printf("Enter %d number: ",num);
scanf("%d",&num);
big = small = num;
limit -= 1;
while(limit){
scanf("%d",&num);
if(num > big){
    big = num;
}else if(num < small){
    small = num;
}
limit--;

}
range = big - small;
printf("The range is : %d",range);  
 return 0; 
 }