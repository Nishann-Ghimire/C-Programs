/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
54321
54321
54321
54321
54321

*/
# include<stdio.h>
 int main(){
   
 //main code  
for(int i = 1; i <= 5; i++){
for(int j = 5; j >= 1; j--){
    printf("%d",j);
}
    printf("\n");
}
 return 0; 
 }