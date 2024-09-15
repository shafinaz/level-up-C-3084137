#include <stdio.h>

int main()
{
  struct weather
  {
    char day[10];
    float temp;
  };
  struct weather week[7] = {
      {"Sunday", 72.5},
      {"Monday", 68.4},
      {"Tuesday", 75.0},
      {"Wednesday", 73.8},
      {"Thursday", 65.1},
      {"Friday", 72.8},
      {"Saturday", 75.2}};

  //sort array
  for(int i = 0; i < 7; i++)
  {
    for(int j = i + 1; j < 7; j++)
    {
      if(week[i].temp > week[j].temp)
      {
        struct weather temp = week[i];
        week[i] = week[j];
        week[j] = temp;
      }
    }
  }

  int x;

  puts("This week's forecast:");
  for (x = 0; x < 7; x++)
    printf("%10s %.1f degrees\n",
           week[x].day,
           week[x].temp);

  return (0);
}
