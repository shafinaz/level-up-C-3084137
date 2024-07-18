#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define POSSIBLE_MOVE 9

enum
{
  top,         // 0
  bottom,      // 1
  right,       // 2
  left,        // 3
  top_left,    // 4
  top_right,   // 5
  bottom_left, // 6
  bottom_right, // 7
  stay //8
} move;

int main()
{
  /* initialize king's position */
  int r = 5, c = 4, count = 0;

  /* initialize random variable */
  srand((unsigned)time(NULL));

  do
  {

    /* generate random placement */
    move = rand() % POSSIBLE_MOVE;

    /* move the king */
    switch (move)
    {
    case top:
      r++;
      break;
    case bottom:
      r--;
      break;
    case right:
      c++;
      break;
    case left:
      c--;
      break;
    case top_right:
      r++;
      c++;
      break;
    case top_left:
      r++;
      c--;
      break;
    case bottom_right:
      c++;
      r--;
      break;
    case bottom_left:
      c--;
      r--;
      break;
    default:
      break;
    }

    /* print out king's current position */
    printf("King is at: row %d, col %d\n", r, c);

    count++;
  } while ((r > 0) && (r < 9) && (c > 0) && (c < 9));

  printf("Count : %d\n", count);

  return 0;
}