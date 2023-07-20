#include "main.h"

/**
* print_lines - print underscore n times
* @n: number of times to print underscore
* Return: void
*/

void print_lines(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
