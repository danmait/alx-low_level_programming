#include <stdio.h>

/**
* main - printsnumber of arguments passed to  this programs name
* @argc: number of arguments
* @argv: anaarray with all arguments
* Return: - Zero
*/

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", --argc);

	return (0);
}

