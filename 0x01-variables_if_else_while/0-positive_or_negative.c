#include <stdlib.h>
#include <time.h>

/**
* main - starting point of program
* Return: Always(0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char *sign;

	if (n == 0)
		sign = "zero";
	else if (n < 0)
		sign = "negative";
	else
		sign = "positive";
	printf("%d is %s\n", n, sign);
	return (0);
}
