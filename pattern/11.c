/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
5
54
543
5432
54321
*/
# include<stdio.h>
 int main(){
   
 //main code  
for(int i = 5; i >= 1; i--){
for(int j = 5; j >= i; j--){
    printf("%d",j);
}
    printf("\n");
}
 return 0; 
 }