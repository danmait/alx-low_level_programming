#include <stdio.h>

/**
* main - prints numbers 0-9
* Return: 0
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(48 + n);
	putchar('\n');
	return (0);
}


