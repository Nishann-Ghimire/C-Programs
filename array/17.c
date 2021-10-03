/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP to input an array and count total no of odd odd even element and add them using function 
*/
# include<stdio.h>
void showArray(int [], int);
void addArray(int [], int);
int counte = 0,counto = 0;
int sume = 0,sumo = 0;
 int main(){
  int arr[50];
  int i,num;
  printf("Enter the size of array : ");
  scanf("%d",&num);
  printf("Enter the array : ");
  for ( i = 0; i < num; i++)
  scanf("%d",&arr[i]);
  showArray(arr,num);
  addArray(arr,num);

 return 0; 
 }

//  function to display array
void showArray(int a[],int n){
    for (int i = 0; i < n; i++)
    printf("%d\t",a[i]);   
    printf("\n");   
}
//  function to add array
void addArray(int a[],int n){
   int i;
    for ( i = 0; i < n; i++)
 {
     if(a[i]%2 == 0){
         counte++;
        sume+=a[i];
     }
         else{
         counto++;
          sumo+=a[i];
     }
 }
 printf("Odd count : %d\nEven count : %d\n\n Odd sum : %d\n Even sum : %d\n",counto,counte,sumo,sume);
}