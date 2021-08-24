/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
print the pattern
*****
 ***
  *
*/
# include<stdio.h>
 int main(){

for(int i = 2; i >= 0; i--){
    for(int j = 0; j < 6; j++){
        if(j >= 3-i && j <= 3+i){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
   
 //main code  
 return 0; 
 }