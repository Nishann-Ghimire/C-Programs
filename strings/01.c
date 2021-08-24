#include<stdio.h>
#include<string.h>
int main(){
    // count the characters 
    char name[] = "Nishan";
    int num;
    num = strlen(name); 
    printf("The number of character is : %d\n",num);
    
    // copies content of one string to another
    char source[] = "Nishan"; 
    char target[10];
    strcpy(target,source);
    puts(target);
    // concatenation of two string
    printf("\n");
    char string1[] = "Nishan "; 
    char string2[30] = "Ghimire";
    strcat(string1,string2);
    puts(string1); // concatenated value is stored in string1

    
    return 0;
}