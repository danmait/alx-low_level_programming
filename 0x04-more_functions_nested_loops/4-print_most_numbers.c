#include "main.h"

/**
* print_numbers - prints numbers from 0 to 9 excluding 2 and 4
* Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
