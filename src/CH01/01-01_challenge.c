#include <stdio.h>

int main()
{
	float v = 0;

	printf("Please input the number: ");

	scanf("%f", &v);

	v *= 5;
	printf("\nMultiplication : %.1f", v);

	v /= 3;
	printf("\nDivision: %.1f", v);

	return(0);
}

