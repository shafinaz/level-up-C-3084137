#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void center_text(int width, char *text)
{
	size_t size = strlen(text);
	char *new_text = (char *)malloc(width + 1);

	if (width < size)
	{
		printf("%s", text);
	}
	else
	{
		int space = (width - size) / 2;
		memset(new_text, ' ', width);
		new_text[width] = '\0';

		memmove(new_text + space, text, size);

		printf("%s", new_text);
	}
	//free(new_text);
	printf("\n");
	
}

int main()
{
	/* some sample text to center */
	char *title[] = {
			"March Sales",
			"My First Project",
			"Centering output is so much fun!",
			"This title is very long, just to see whether the code can handle such a long title"};
	int x;

	/* output each of the strings, centered */
	for (x = 0; x < 4; x++)
	{
		/* assume the screen width to be 80 characters */
		center_text(80, title[x]);
	}

	return (0);
}
