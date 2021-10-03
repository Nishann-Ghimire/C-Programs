/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to add two matrices using functions. Use seprate functions to input ,add and display the 
value
*/
# include<stdio.h>


void input(int *arr,int n){
   
    for(int i = 0; i < n ; i++){
    printf("Enter the %d element : ",i+1);
    scanf("%d",arr);
    arr++; 
    }
}

void display(int n,int *a){
    for(int i = 0; i < n; i++){
    printf("%d\t",*a);
    a++;
    }
}

void sum(int *arr1, int *arr2, int n,int *sum){
    for(int i = 0; i < n; i++){
    *sum = *arr1 + *arr2;
    sum++;
    arr1++;
    arr2++;
    }
}
 int main(){
     int size;
   printf("Enter the size of array : ");
   scanf("%d",&size);
     int a1[size], a2[size],s[size];

    input(&a1[0],size);
    input(&a2[0],size);
    sum(&a1[0],&a2[0],size,&s[0]);
    display(size,&s[0]);

 return 0; 
 }