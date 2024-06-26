#include <stdio.h>

int sequence(int value)
{
  printf("%d ", value);
  static int sequence_count = 1;
  if(value == 1)
    return(sequence_count);
  else if(value%2)//odd number
  {
    value = (value * 3) + 1;
  }
  else //even number
  {
    value /= 2;
  }
  sequence(value);
  sequence_count++;
}

int main()
{
  int input = 0, output = 0;
  printf("Enter the starting value: \n");
  scanf("%d", &input);
  printf("Hailstone Sequence: ");
  output = sequence(input);
  printf("\nSequence length: %d\n", output);

      return (0);
}