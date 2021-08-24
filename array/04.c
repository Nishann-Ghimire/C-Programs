/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP a program to sort elements in ascending order using bubble sort.

*/
# include<stdio.h>
 int main(){
int array[5] = {13,61,77,68,9};
int num = 0;
int n = 5,temp;
int back = 1;
printf("Array before sorting :\n ");
for (int j = 0; j < n; j++)
     printf("\t %d",array[j]);
 

for(int i = 0; i < n-1; i++)
{
    back = 0;
    for (int j = 0; j < n-1-i; j++)
    {
        if(array[j] > array[j+1]){
        temp = array[j];
        array[j] = array[j+1];
        array[1+j] = temp;
        back = 1;
        }
    }    
    printf("\n%d times",i+1);
    if(back == 0)
    break;
}

printf("\nArray after sorting :\n ");
 for(int k = 0; k < n; k++)
  printf("\t %d",array[k]);
 
 
 return 0; 
 }