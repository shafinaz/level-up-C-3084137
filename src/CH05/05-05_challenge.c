#include <string.h>
#include <stdio.h>

int main()
{
  char *arr = "Abra Cadabra";

  size_t sze = strlen(arr);

  for (int i = 0; i < sze; i++)
  {
    printf("%c", *(arr + i));
  }

  return (0);
}