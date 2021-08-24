/* Author: Nishan Ghimire 
Roll no : 210316
Date: 2021/05/24
Question
Write a program to read the time in minutes and convert it to hours and minutes.
*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
    int minutes, hour, min;
    printf("Enter the Time in Minute : ");
    scanf("%d", &minutes);
    min = minutes % 60;
    hour = minutes / 60;
    printf("The Time is %d hour and %d minutes", hour, min);
    return 0;
 }