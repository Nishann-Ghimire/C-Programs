/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
print the pattern
****
*  *
*  *
****
*/
# include<stdio.h>
 int main(){
    

for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
       if(i == 0 || i == 3 || j == 3 || j == 0){
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