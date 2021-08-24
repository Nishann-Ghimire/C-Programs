/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to generate all pythagorean triplets with side less than or equal to 30
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
  int a,b,c,d; 
 //main code
 for (int i = 1; i <= 30; i++)
 {
    //  for odd numbers
    if(i%2 != 0){
        a =  pow(i,2)/2;
        b =  a + 1;
        printf("%d\t%d\t%d\n",i,a,b);
    }
    // for even number
    if(i%2 == 0){
        c = pow(i/2,2) + 1;
        d = pow(i/2,2) - 1;
        printf("%d\t%d\t%d\n",i,c,d);
        
    }
 }
   
 return 0; 
 }