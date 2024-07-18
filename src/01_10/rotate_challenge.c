#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALPH_SIZE 26
#define GRID_SIZE 5

int main()
{
  int r = 0;
  char alph[] = {"abcdefghijklmnopqrstuvwxyz"};
  char grid[GRID_SIZE][GRID_SIZE];
  char rotated[GRID_SIZE][GRID_SIZE];

  srand((unsigned)time(NULL));

  puts("Initial board\n");

  /* initializing grid values randomly */
  for (int x = 0; x < GRID_SIZE; x++)
  {
    for (int y = 0; y < GRID_SIZE; y++)
    {
      do
      {
        r = rand() % ALPH_SIZE; // generating 0 - 25
      } while (alph[r] == 'A'); // ensure unique character placement

      grid[x][y] = alph[r];
      alph[r] = 'A';
      printf(" %c ", grid[x][y]);
    }
    printf("\n");
  }
  printf("\n");

  /* turn 90 degree clockwise */
  for (int x = 0; x < GRID_SIZE; x++)
  {
    for (int y = 0; y < GRID_SIZE; y++) // row
    {
      rotated[y][GRID_SIZE - 1 - x] = grid[x][y];
    }
  }

  puts("Rotated board\n");
  for (int x = 0; x < GRID_SIZE; x++)
  {
    for (int y = 0; y < GRID_SIZE; y++)
    {
      printf(" %c ", rotated[x][y]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}