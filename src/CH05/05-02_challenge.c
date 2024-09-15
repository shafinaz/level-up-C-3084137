#include <stdio.h>
int main()
{
  int x;
  int *ptr;

  ptr = &x;
  *ptr = 24;

  printf("Value: %d", *ptr);
  *ptr++;//pointer got incremented
  ++*ptr;//increment value
  printf("\nValue after: %d", *ptr);
  return (0);
}