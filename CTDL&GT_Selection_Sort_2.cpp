https://tuicocach.com/chonselection-sort-thuat-toan-sap-xep/
#include <stdio.h>
//Hàm đổi chỗ 2 số nguyên a, b
void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
//Hàm sắp xếp chọn (selection Sort)
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
      int min_index = i;
      for (int j = i+1; j < n; j++)
      {
//Tìm vị trí phần tử nhỏ nhất
        if(arr[min_index] > arr[j])
         min_index = j;
      }
  // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[i], arr[min_index]);
    }
}
//Hàm xuất mảng
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {3,2,6,9,1,4,7,10,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
