/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Date: 2021/05/24
Question
WAP to use sizeof operator to determine the size of different data types.
*/
#include <stdio.h>
int main()
{
  int a = 3;
  float b = 4;
  double d = 4;
  printf("The size of int is %d bytes\n", sizeof(a));
  printf("The size of float is %d bytes\n", sizeof(b));
  printf("The size of double is %d bytes", sizeof(d));
  return 0;
}