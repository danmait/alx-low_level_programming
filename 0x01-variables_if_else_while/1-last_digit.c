#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - checks and print whether a 0 < n < 6
* Return: Always
*/

int main(void)
{
	int n;
	char *n_info;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;

	if (last_n == 0)
		n_info = "0";
	else if (last_n > 5)
		n_info = "greater than 5";
	else
		n_info = "less than 6 and not 0";
	printf("Last digit of %d is %d and is %s\n", n, last_n, n_info);
	return (0);
}
