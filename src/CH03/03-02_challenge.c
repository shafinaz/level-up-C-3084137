#include <stdio.h>

int* challenge()
{
  static int arr[] = { 2, 3, 5, 7, 9};

  return arr;
}

int main()
{
  int *arr = challenge();

  for(int i = 0; i < 5; i++)
  {
    printf("%d, ", arr[i]);
  }
  return(0);
}