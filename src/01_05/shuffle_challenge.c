#include <stdio.h>
#include <string.h>

void shuffle(char arr[])
{
  int size = strlen(arr);
  char new_arr[size+1];

  //initialize with null terminator
  new_arr[size] = '\0';

  char *ptr1 = &arr[0];
  char *ptr2 = &arr[(size+1)/2];

  int i = 0, j = 0;
  while (i < (size + 1) / 2 && j < size)
  {
    new_arr[j++] = *ptr1++;
    if (j < size)
    {
      new_arr[j++] = *ptr2++;
    }
    i++;
  }

  strcpy(arr, new_arr);

}

int main()
{
  const char sampleA[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  char setCmp[27];
  int count = 1;

  strcpy(setCmp, sampleA);

  printf("Deck Arragement: %s\n", setCmp);
  printf("Count: %2d\n", count);

  do{
    shuffle(setCmp);
    printf("Deck Arragement: %s\n", setCmp);
    printf("Count: %2d\n", ++count);

  }while (strcmp(setCmp, sampleA));

  return(0);
}