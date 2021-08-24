/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
A
AB
ABC
ABCD
ABCDE

*/
# include<stdio.h>
 int main(){
   
 //main code  
for(int i = 1; i <= 5; i++){
for(int j = 1; j <= i; j++){
    printf("%c",j+64);
}
    printf("\n");
}
 return 0; 
 }