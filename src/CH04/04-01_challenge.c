#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];

  printf("Please insert text: ");
  scanf("%s", &str);

  const size_t sze = strlen(str);
  
  //sort
  for(int i = 0; i < sze; i++)
  {
    for(int y = i + 1; y < sze; y++)
    {
      if (str[i] > str[y])
      {
        char temp = str[i];
        str[i] = str[y];
        str[y] = temp;
      }
    }
  }

  printf("\bSorted string: %s", str);
  
  return(0);
}

