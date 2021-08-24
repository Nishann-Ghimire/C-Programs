/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
1
22
333
4444
55555

*/
# include<stdio.h>
 int main(){
   
 //main code  
for(int i = 1; i <= 5; i++){
for(int j = 1; j <= i; j++){
    printf("%d",i);
}
    printf("\n");
}
 return 0; 
 }