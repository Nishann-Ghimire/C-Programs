/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print the following pattern
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
    for(int j = 1; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
 return 0; 
 }