#include <stdio.h>

/**
* main - prints this programs name
* @argc: number of arguments
* @argv: anaarray with all arguments
* Return: - Zero
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
