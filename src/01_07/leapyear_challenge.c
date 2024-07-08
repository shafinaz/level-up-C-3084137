#include <stdio.h>

int leapyear(int year)
{
  if ((year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0))
  {
    return 1;
  }
  else if ((year % 4 == 0) && (year % 100 == 0))
  {
    return 0;
  }
  else if (year % 4 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  for (int x = 1582; x < 2102; x++)
  {
    if (leapyear(x))
      printf("Year %d is a leapyear.\n", x);
  }
  return 0;
}