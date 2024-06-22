#include <stdlib.h>
#include <stdio.h>

int main(){

  //input
  float input[] = {0.49, 1.27, 0.75, 1.31, 0.83};
  for(int i = 0; i < 5; i++)
  {
    int cents = (int)(input[i] * 100);
    int quarter = 0, dime = 0, nickel = 0, penny = 0;
    printf("$%f", input[i]);
    printf("\n");
    while(cents>= 25)
    {
      quarter++;
      cents -= 25;
    }
    while (cents >= 10)
    {
      dime++;
      cents -= 10;
    }
    while (cents >= 5)
    {
      nickel++;
      cents -= 5;
    }
    while (cents >= 1)
    {
      penny++;
      cents -= 1;
    }
    printf("Quarter: %d, Dime: %d, Nickel: %d, Penny: %d", quarter, dime, nickel, penny);
    printf("\n");
  }

  //output
  return(0);
}