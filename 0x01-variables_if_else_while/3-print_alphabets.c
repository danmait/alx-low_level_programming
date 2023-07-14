#include <stdio.h>

/**
* main - print the alphabet in lower then upercase
* Return: return 0
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
