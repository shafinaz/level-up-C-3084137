#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate(void);

int main()
{
	int x;
	int *a;

	puts("Here are 10 random numbers:");
	a = generate();
	for (x = 0; x < 10; x++)
		printf(" %3d", a[x]);
	putchar('\n');

	return (0);
}

int *generate(void)
{
	static int arr[10];
	srand((unsigned)time(NULL));

	for (int x = 0; x < 10; x++)
		arr[x] = rand() % 100 + 1;

	return (arr);
}
