#include "main.h"

/**
* print_square - prints a square
* @size: the dimension of the square
* Return: void
*/

void print_square(int size)
{
	int i, j;

	i = size;

	if (size < 1)
		_putchar('\n');

	while (i > 0)
	{
		j = size;

		while (j)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		i--;
	}
	_putchar('\n');
}
