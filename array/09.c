#include<stdio.h>
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int temp;
    int back = 1;
    for (int i = 0; i < n-1; i++)
    {
        back = 0;
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            back = 1;
           }
        }  
     printf("\n%d times\n",i);
        if(back == 0){
            break;
        } 
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d\t",arr[k]);
    }
    
     
}

