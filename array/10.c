# include<stdio.h>

int main(){
    int arr[5] = {23,56,78,34,21};
    int temp,n = 5,min_value_posn;

    for (int i = 0; i < n; i++)
    {
        min_value_posn = i;
        for (int k = i+1; k < n; k++)
        {
            if(arr[k] < arr[min_value_posn])
            min_value_posn = k;
        }
        // for swapping
         temp = arr[i];
         arr[i] = arr[min_value_posn];
         arr[min_value_posn] = temp;
    }
    printf("Sorted array is :");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t",arr[j]);
    }
    
}