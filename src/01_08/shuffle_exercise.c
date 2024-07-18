#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PSIZE 20

int main()
{
  char *playlist[PSIZE] = {
      "Like a Rolling Stone", "Satisfaction", "Imagine",
      "What's Going On", "Respect", "Good Vibrations",
      "Johnny B. Goode", "Hey Jude", "What'd I Say",
      "Smells Like Teen Spirit", "My Generation",
      "Yesterday", "Blowin' in the Wind", "Purple Haze",
      "London Calling", "I Want to Hold Your Hand",
      "Maybellene", "Hound Dog", "Let It Be",
      "A Change Is Gonna Come"};

  int frequency[PSIZE];
  int x, r, count, chk_freq = 0;
  int chk_count = 15;

  /* initialize */
  srand((unsigned)time(NULL));
  for (x = 0; x < PSIZE; x++)
    frequency[x] = 0;

  puts("Playlsit");
  count = 0;
  while (count < 100)
  {
    do
    {
      r = rand() % PSIZE; /* random value */
    } while ((frequency[r] > chk_freq) && (count < chk_count));

    printf("%3d: Now Playing '%s '\n",
           count + 1,
           playlist[r]);
    frequency[r]++;
    count++;
    if (count % 15 == 0)
    {
      chk_count += 15;
      chk_freq++;
    }
  }

  puts("Song frequency:");
  for (x = 0; x < PSIZE; x++)
    printf("%s: %d\n", playlist[x], frequency[x]);

  return 0;
}