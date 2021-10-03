// Question
// WAP to input string and copy  it into another
#include<stdio.h>
int main(){
    char strSource[100];
    char strTarget[100];
    int i = 0;
    printf("Enter the string : ");
    gets(strSource);
    for ( i = 0; strSource[i]!='\0'; i++)
    {
       strTarget[i] = strSource[i];
    }
   strTarget[i] = '\0';
    printf("Copied String : %s",strTarget);
    return 0;
}