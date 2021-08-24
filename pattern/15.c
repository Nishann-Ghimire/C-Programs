/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
print the pattern
000000
11111
2222
333
44
5
*/
# include<stdio.h>
 int main(){

for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6-i; j++){
        printf("%d",i);
    }
    printf("\n");
}
   
 //main code  
 return 0; 
 }