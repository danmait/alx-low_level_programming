#include <stdio.h>

/**
* main - printsbase 16 characters
* Return: 0
*/

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n > 9)
			putchar(87+n);
		else
			putchar(48+n);
	putchar('\n');
	return (0);
}

