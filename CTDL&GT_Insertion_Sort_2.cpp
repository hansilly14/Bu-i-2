https://tuicocach.com/insertion-sort-thuat-toan-sap-xep-chen/
#include <stdio.h>
#include <math.h>
  

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
  

void printArray(int arr[], int n)
{
   for (int i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
  
int main()
{
    int arr[] = {3,2,6,9,1,4,7,10,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    insertionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
  
    return 0;
}
