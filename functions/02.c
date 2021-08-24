/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a function to add two number
*/
# include<stdio.h>
int add(int x,int y);
 int main(){
 int a,b,sum;
 printf("Enter two numbers : ");
 scanf("%d%d",&a,&b);
 sum = add(a,b);
 printf("The sum is %d",sum);
 return 0; 
 }
int add(int x, int y){
    int z;
    z = x + y;
    return(z);
}