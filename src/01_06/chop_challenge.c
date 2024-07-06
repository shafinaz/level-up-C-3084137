#include <stdio.h>
#include <stdlib.h>

char *left(char *s, int len)
{
	char *ret = (char *)malloc(len+1);
	memcpy(ret, s, len);
	ret[len+1] = '\0';
	return ret;
}

char *right(char *s, int len)
{
	char *ptr = s;
	int count = 0;
	do
	{
		count++;
		s++;
	} while (*s != '\0');
	ptr += (count - len);
	return ptr;
}

char *mid(char *s, int offset, int len)
{
	char *ptr = s;
	char *ret = (char *)malloc(sizeof(char) * (len + 1));
	int count = 0;
	do
	{
		count++;
		s++;
	} while (*s != '\0');
	// count is not including null terminator
	// ptr is pointing to 'O'
	ptr += offset;

	for (int i = 0; i < len; i++, ptr++)
	{
		ret[i] = *ptr;
	}
	ret[len + 1] = '\0';
	return ret;
}

int main()
{
	char string[] = "Once upon a time, there was a string";

	printf("Original string: %s\n", string);
	printf("Left %d characters: %s\n", 16, left(string, 16));
	printf("Right %d characters: %s\n", 18, right(string, 18));
	printf("Middle %d characters: %s\n", 11, mid(string, 13, 11));

	return (0);
}
