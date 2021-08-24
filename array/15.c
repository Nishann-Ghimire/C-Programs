/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Write a program to sort the number by selection sort and bubble sort
*/
void printArr(int *arr, int n);
void selectionSort(int *arr, int n);
void bubbleSort(int *arr, int n);
#include <stdio.h>
int main()
{
    int array[5] = {34, 45, 24, 11, 2};

    int n = 5;
    printf("Before sorting : ");
    printArr(array, n);
    // selectionSort(array, n);
    bubbleSort(array, n);
    printf("\nAfter sorting : ");
    printArr(array, n);
    return 0;
}
// Sorting array by selection sort
void selectionSort(int *arr, int n)
{
    int min_val_pos, temp;
    for (int i = 0; i < n; i++)
    {
        min_val_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_val_pos])
            {
                min_val_pos = j;
            }
        }
        // swapping code
        temp = arr[i];
        arr[i] = arr[min_val_pos];
        arr[min_val_pos] = temp;
    }
}
// Sorting array by bubble sort
void bubbleSort(int *arr, int n)
{
    int temp, leave = 0;
    for (int i = 0; i < n - 1; i++)
    {
        leave = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                leave = 0;
            }
        }
        if (leave == 1)
            return;
    }
}

//  function for print Array element
void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
}