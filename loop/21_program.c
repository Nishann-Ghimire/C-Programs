/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Print The pattern
4444
3333
2222
1111
*/
# include<stdio.h>
 int main(){
for(int i = 4;i>= 1;i--){
    for(int j = 4; j > 0 ; j--){
        printf("%d",i);
    }
    printf("\n");
}
 return 0; 
 }