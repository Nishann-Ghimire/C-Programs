/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
    *
   **
  ***
 ****
*****
*/
# include<stdio.h>
 int main(){
   
 //main code  
for(int i = 1; i <= 5; i++){
for(int j = 1; j <= 5; j++){
    
    if(i+j > 5)
    printf("*");
    else
    printf(" ");
}
    printf("\n");
}
 return 0; 
 }