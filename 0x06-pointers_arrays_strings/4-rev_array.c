/**
* reverse_array - reverses an array
* @a: the array
* @n: size of array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int tmp, i;

	i = 0;

	while (i < (n / 2))
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
		i++;
	}
}
