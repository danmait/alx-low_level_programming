#include <stdio.h>

/**
* main - prints all arguments passed
* @argc: number of arguments
* @argv: anaarray with all arguments
* Return: - Zero
*/

int main(int argc __attribute__((unused)), char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

