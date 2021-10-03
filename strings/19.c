/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to compare 2 string without using <string.h> and strcmp
*/
# include<stdio.h>
 int main(){
      char str1[10], str2[10];
    int i, j;
    int check = 1;
    printf("Enter first String : ");
    gets(str1);

    printf("Enter second String : ");
    gets(str2);

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i]){
            check = 0;
            break;
        }
    }
    if(check == 1){
        printf("Strings are equal");
    }else{
        printf("String are not equal");
    }
 return 0; 
 }