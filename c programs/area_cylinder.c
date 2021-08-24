# include<stdio.h>
# include<math.h>
 int main(){
//   variables for user input
int radius, height;
//   variables for process
float area, volume;
//   variables for constants
float pi = 3.14;

  printf("Please input Radius of Cylinder: ");
  scanf("%d",&radius);
  printf("Please input height of Cylinder: ");
  scanf("%d",&height);
    area = pi * pow(radius,2);
  volume = area * height;
  printf("The Area of the Cylinder is %f\n",area);
  printf("The Volume of the Cylinder is %f",volume);
 return 0; 
 }