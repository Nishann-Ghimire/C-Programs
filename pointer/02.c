/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a function that receives 5 integers and returns the sum,
average and standard deviation of these number s. call this  function 
from main() and print the results in main()
*/
# include<stdio.h>
# include<math.h>
// passsing values and address of ans variable to store ans
int calculate(int a,int b,int c,int d,int e,float *ans_sd,float *ans_avg,float *ans_sum);
 int main(){
   int u=5,v=6,w=4,x=9,y=3;
   float ans_sd,ans_sum,ans_avg;
   calculate(u,v,w,x,y,&ans_sd,&ans_avg,&ans_sum);
   printf("Standarad Deviation is : %f ",ans_sd);
   printf("Sum is : %f ",ans_sum);
   printf("Average : %f ",ans_avg);
 return 0; 
 }
 int calculate(int a,int b,int c,int d,int e,float *ans_sd,float *ans_avg,float *ans_sum)
 {
     int sum,average,sd,sd_average;
     sum = a+b+c+d+e;
     *ans_sum = sum;
     average = sum/5;
     *ans_avg = average;
     sd_average = pow((average - a),2) + pow((average - b),2) + pow((average - c),2) + pow((average - d),2) + pow((average - e),2);
     sd = sqrt(sd_average/4);
     *ans_sd = sd; //storing ans in the location of ans variable
     return 0; 

 }