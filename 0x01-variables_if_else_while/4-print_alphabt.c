#include <stdio.h>

/**
* main - prints alphabet in lower case except char 'q' and 'e'
* Return: 0
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

