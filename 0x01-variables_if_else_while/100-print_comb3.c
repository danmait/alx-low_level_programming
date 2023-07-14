#include <stdio.h>

/**
* main - prints combinations of two digit numbers
* Return: 0
*/

int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (m == n || n > m)
				continue;

			putchar(48 + n);
			putchar(48 + m);

			if (!(m == 9 && n == 8))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
