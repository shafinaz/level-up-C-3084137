#include <stdio.h>

int main()
{
	int a, b;

	a = 5;
	b = 20;

	printf("In this case, variable %c is greater.\n",
				 (a > b) ? 'a' : 'b');

	return (0);
}
