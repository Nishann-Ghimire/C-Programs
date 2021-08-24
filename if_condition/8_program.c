/* Author: Nishan Ghimire 
Roll no : 210316
Question
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
   int maths, physic, computer, chemistry, english;
   float total, percent;
    printf("Enter your marks for Maths: ");
    scanf("%d",&maths);
    printf("Enter your marks for physic: ");
    scanf("%d",&physic);
    printf("Enter your marks for computer: ");
    scanf("%d",&computer);
    printf("Enter your marks for chemistry: ");
    scanf("%d",&chemistry);
    printf("Enter your marks for english: ");
    scanf("%d",&english);
 //main code  
    total = maths+physic+computer+chemistry+english;
    percent = (total/500)*100;
   if(percent >= 80){
            printf("congratulations you have got distinction :) your percent is --> %f",percent);
        }else if(percent >= 60 && percent < 80){
            printf("Well done you have obtain first division :) your percent is --> %f",percent);
        }else if(percent >= 40 && percent < 60){
            printf("Keep it up you have obtain second division :) your percent is --> %f",percent);
        }else{
            printf("Sorry :( please try next time you are fail");
        }
     
 return 0; 
 }