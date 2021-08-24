# include<stdio.h>
 int main(){
//   variables for user input
int length, breadth;
//   variables for process
int area;  
  printf("Please input length of Rectangle: ");
  scanf("%d",&length);
  printf("Please input bradth of Rectangle: ");
  scanf("%d",&breadth);
  area = length * breadth;
  printf("The Area of the rectangle is %d",area);
 return 0; 
 }