#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;

  for( )
}

void swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

quickSort(int arr[], int low, int high)
{
  if(low < high){
    
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quicSort(arr, pi + 1, high);
  }
}

void printf(int *arr, int s)
{
  for(int i = 0; i < s; i++)
  {
    printf(" %d", arr[i]);
  }
}

int main()
{
  int arr[] = {10, 7, 8, 9, 1, 5};

  int n = sizeof(arr)/sizeof(arr[0]);

  quickSort(arr, 0, n - 1);

  printf(arr, n);
  return(0);
}