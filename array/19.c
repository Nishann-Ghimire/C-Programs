/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input an array and find the maximum and minimum element using function
*/
# include<stdio.h>
void checkNumber(int a[],int n){
    int gNI = 0,sNI = 0;
for (int i = 0; i < n-1; i++)
{
    if(a[i+1]>a[i])
    gNI = i+1;
    
    if(a[i+1]<a[i])
    sNI = i+1;

}
printf("The maximum number is : %d and minimum number is %d",a[gNI],a[sNI]);
}

 int main(){
  int arr[50];
  int i,num;
  printf("Enter the size of array : ");
  scanf("%d",&num);
  printf("Enter the array : ");
  for ( i = 0; i < num; i++)
  scanf("%d",&arr[i]);

checkNumber(arr,num);

 return 0; 
 }