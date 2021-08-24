/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
*****
 ****
  ***
   **
    *
*/
# include<stdio.h>
 int main(){
   
 //main code  
for(int i = 0; i < 5; i++){
for(int j = 0; j < 5; j++){
    if(j>=i){
        printf("*");
    }else{
        printf(" ");
    }
}
    printf("\n");
}
 return 0; 
 }