#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

void convert(char t[], int s)
{
  for(int i = 0; i < s; i++)
  {
    if(t[i] == ' ')
    {
      t[i] = '_';
    }
    else
    {
      t[i] = toupper(t[i]);
    }
  }
}

int main()
{
  char text[MAX];

  printf("Please input text: ");
  fgets(text, MAX, stdin);

  const size_t sze = strlen(text);

  convert(text, sze);

  printf("%s", text);
  return(0);
}