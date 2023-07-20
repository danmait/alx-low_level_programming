#include <stdio.h>

/**
* main - prints the largest prime factor of n
* Return: 0
*/

int main(void)
{
	long long n, i, lp;

	n = 612852475143;
	lp = 1;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			lp = i;
			n /= i;
		}
	}
	return (0);
}
