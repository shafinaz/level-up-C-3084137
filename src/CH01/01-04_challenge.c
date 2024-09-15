#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	char* ans;

	printf("Enter a value: ");
	scanf("%d",&a);

	printf("This number is : %s", (a % 2) ? "odd" : "even");
	

	return(0);
}

