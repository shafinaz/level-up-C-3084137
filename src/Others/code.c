/*#include <stdio.h>

int main()
{
  int arr_size = 1000;
  int* ptr = (int *) malloc(sizeof(int));
  int* arr_ptr = (int *) malloc(arr_size*sizeof(int));

  if((ptr == NULL) || (arr_ptr == NULL)){
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
}

  for(int i = 0; i < arr_size; i++)
  {
    arr_ptr[i] = 0;
  }

  *ptr = 2;

  (void)memcpy(arr_ptr, ptr, sizeof(int));

  free(arr_ptr);
  free(ptr);
  return(0);
}*/